#include <iostream>

class Point{
    // members
    int x;
    int y;

    public:
        Point(): x(0), y(0) {} // default constructor
        Point(const int X,const int Y  /*arguments*/): x(X), y(Y) { 
            // parameterised constructor
        }
        ~Point(){} // destructor

        // getter methods
        int get_y(){  // getx
            return y;
        }
        int get_x(){ // gety
            return x;
        }

        // setter method
        void set(const int x, const int y){
            this->x = x; // setx
            this->y = y; // sety
        }

        // display method
        void display(){
            std::cout << "x: " << x <<  ", y: " << y << std::endl;
        }
};

int main(){

    Point p1,p2(3,6);
    p1.display();
    p2.display();

    return 0;
}