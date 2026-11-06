#include <iostream>
#include <cmath>

class Circle {
    //Position of the center
    public: 
    double x;
    double y;

    double r; // radius

    Circle( double px, double py, double pr){
        x = px;
        y= py;
        r =pr;
    }
    // Calculate the perimeter of the circle
    double perimeter(){
       return 2 * M_PI * r; 
    }
};

// Set the position of the center
void set_pos(Circle *c, double x, double y) {
    c->x = x;
    c->y = y;
}
//TODO: Add a method to calculate the area of the circle
class Rectangle{
    public:
    //Position of the top left corner
    double x;
    double y;

    double w; //width
    double h; //height

    Rectangle( double px, double py, double pw, double ph){
        x= px;
        y= py;
        w= pw;
        h= ph;
    }
    // Calculate the perimeter of the rectangle
    double perimeter() {
    return 2 * (w + h);
    }
};

// TODO: Add a method to calculate the area of the rectangle

// Set the position of the top left corner
void set_pos(Rectangle *r, double x, double y) {
    r->x = x;
    r->y = y;
}

int main() {
    Circle c{0, 0, 1};
    std::cout << c.perimeter() << std::endl;
    set_pos(&c, 1, 1);
    std::cout << "Coordinates of the center: (" << c.x << ", " << c.y << ")" << std::endl;

    Rectangle r{0, 0, 1, 2};
    std::cout << r.perimeter() << std::endl;
    set_pos(&r, -1, -1);
    std::cout << "Coordinates of the top left corner: (" << r.x << ", " << r.y << ")" << std::endl;
    return 0;
}