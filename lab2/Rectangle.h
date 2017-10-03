//
// Created by oguns on 9/19/2017.
//

#ifndef LAB2_RECTANGLE_H
#define LAB2_RECTANGLE_H

#include <array>

using namespace std;

class Rectangle {
    int d_x_start;
    int d_x_end;
    int d_y_start;
    int d_y_end;

public:
    Rectangle(int x_start = -1, int y_start = -1, int width = 1, int height = 1);
    void print();
    bool intersect(Rectangle other);
    Rectangle intersection(Rectangle other);
    array<Rectangle, 4> split();

private:
    bool inRange(Rectangle other);
    Rectangle getIntersectionRectangle(Rectangle other);
};


#endif //LAB2_RECTANGLE_H
