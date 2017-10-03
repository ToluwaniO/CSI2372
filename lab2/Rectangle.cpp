//
// Created by oguns on 9/19/2017.
//

#include <iostream>
#include "Rectangle.h"


Rectangle::Rectangle(int x_start, int y_start, int width, int height):d_x_start(x_start), d_y_start(x_start),
                                                                      d_x_end(x_start+width), d_y_end(y_start+height) {}
bool Rectangle::intersect(Rectangle other) {
    return inRange(other);
}
Rectangle Rectangle::intersection(Rectangle other) {
    if(inRange(other))
    {
        Rectangle r = getIntersectionRectangle(other);
        r.print();
        return r;
    }
    cout << "No rectangle" << endl;
    return Rectangle(0,0,0,0);
}
array<Rectangle, 4> Rectangle::split() {
    array<Rectangle,4> rectangles;
    int height = d_y_end - d_y_start;
    int width = d_x_end - d_x_start;

    if(height%4 == 0)
    {
        int delta = height/4;
        for(int i = 0; i < 4; ++i)
        {
            rectangles[i] = Rectangle(d_x_start, d_y_start+(delta*i), d_x_start, delta);
        }
    }
    else if(width%4 == 0)
    {
        int delta = width/4;
        for(int i = 0; i < 4; ++i)
        {
            rectangles[i] = Rectangle(d_x_start+(delta*i), d_y_start, delta, d_y_end);
        }
    }
    else if(height > 4)
    {
        int one = height/4;
        int two = one;
        int three = one;
        int four = height-one-two-three;

        rectangles[0] = Rectangle(d_x_start, d_y_start, d_x_end, one);
        rectangles[1] = Rectangle(d_x_start, rectangles[0].d_y_end, d_x_end, two);
        rectangles[2] = Rectangle(d_x_start, rectangles[1].d_y_end, d_x_end, three);
        rectangles[3] = Rectangle(d_x_start, rectangles[2].d_y_end, d_x_end, four);
    }
    else
    {
        int one = width/4;
        int two = one;
        int three = one;
        int four = height-one-two-three;

        rectangles[0] = Rectangle(d_x_start, d_y_start, one, d_y_end);
        rectangles[1] = Rectangle(rectangles[0].d_x_start, d_y_start, two, d_y_end);
        rectangles[2] = Rectangle(rectangles[1].d_x_start, d_y_start, three, d_y_end);
        rectangles[3] = Rectangle(rectangles[2].d_x_start, d_y_start, four, d_y_end);
    }

    return rectangles;
}

bool Rectangle::inRange(Rectangle other){
    bool x_intersects = false;
    bool y_intersects = false;

    for (int i = d_x_start; i < d_x_end+1; ++i) {
        if(i >= other.d_x_start && i <= other.d_x_end){
            x_intersects = true;
            break;
        }
    }

    for (int j = d_y_start; j < d_y_end+1; ++j) {
        if(j >= other.d_y_start && j <= d_y_end){
            y_intersects = true;
            break;
        }
    }
    return  x_intersects && y_intersects;
}

Rectangle Rectangle::getIntersectionRectangle(Rectangle other) {
    int x_start, x_end, y_start, y_end;
    bool x_filled = false;
    bool y_filled = false;
    for (int i = d_x_start; i < d_x_end+1; ++i) {
        if(i >= other.d_x_start && i <= other.d_x_end){
            if(!x_filled) {
                x_start = i;
                x_filled = true;
            }
            else{
                x_end = i;
                break;
            }
        }
    }

    for (int j = d_y_start; j < d_y_end+1; ++j) {
        if(j >= other.d_y_start && j <= d_y_end){
            if(!y_filled) {
                y_start = j;
                y_filled = true;
            }
            else{
                y_end = j;
                break;
            }
        }
    }

    return Rectangle(x_start, y_start, x_end-x_start, y_end-y_start);
}

void Rectangle::print() {
    cout << "Rectangle: (" << d_x_start << ", " << d_y_start << ") to (" << d_x_end << ", " << d_y_end << ")" << endl;
}

int main() {
    Rectangle r(0,0,5,5);
    Rectangle other(-1,-5,1,1);
    r.print();
    r.intersection(other);

    if(r.intersect(other)){
        cout << "R and other intersect" << endl;
    }

    array<Rectangle,4> ar = r.split();
    for (int i = 0; i < ar.size(); ++i) {
        ar[i].print();
    }

    return 0;
}