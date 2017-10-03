#include <iostream>
#include "Rectangle.h"

using namespace std;

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