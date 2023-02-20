#include <iostream>

using namespace std;

class Shape{

    protected:
        //can only be accessed by the class itself and derived classes
        int width;
        int height;

    public:
        virtual void makeIntroduction(){
            //get overriden by derived classes 
            cout << "Hello!\n";
        }

public:
    Shape(int w, int h) : width(w), height(h){}

    void setWidth(int w){
        width = w;
    }

    void setHeight(int h){
        height = h;
    }

};

class Rectangle : public Shape{
    public:
        Rectangle(int w, int h) : Shape(w, h){}
        void makeIntroduction() override{
            cout << "Hello, i'm one rectangle!\n";
        }

    int area(){
        return width * height;
    }
};

class Square : public Rectangle{
    public:
        void makeIntroduction() override{
            cout << "Hello, i'm one square!\n";
        }
        Square(int s) : Rectangle(s, s){}
};

void objectIntroduction(Shape* obj){
    //if the conversion is valid, it can use derived classes from the class shape or other classes, changing the function behavior when overriden with the specific class method
    obj->makeIntroduction();
}

int main (){
     
     Rectangle rect(5, 10);
     Square square(7);

     objectIntroduction(&square);
     objectIntroduction(&rect);


    cout << "Rectangle area: " << rect.area() << endl;

     cout << "Square area: " << square.area() << endl;

     rect.setWidth(8);

     cout << "Rectangle area: " << rect.area() << endl;

     cout << "Square area: " << square.area() << endl;

    return 0;
}