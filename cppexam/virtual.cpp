// #include<iostream>
// using namespace std;


// class Shape{
//     public:
//     virtual void input();
//     void area();
//     void perimeter();
//     void display();
// };

// class Circle:public Shape {
//     int r;
//     float a1,p1;
//     public:
//     void input(){
//         cout << "Enter radius of circle: ";
//         cin >> r;
//         }
//     void area(){
//         a1= 3.14 * r * r ;

//     }
//     void perimeter(){
//         p1 =2 * 3.14 * r;
        
//     }
//     void display(){
//         cout << "Circle" << endl;
//         cout<< "area"<<a1<<endl;
//         cout<< "perimeter"<<p1<<endl;
//     }
// };
// class Triangle:public Shape{
//     float a2,p2;
//     int b,h;
//     void input(){
//         cout << "Enter base and height of triangle: ";
//         cin >> b >> h;

//     }
//     void area(){
//         a2 = 0.5 * b * h;
//     }
//     void perimeter(){
//         p2 = b + h ;
//     }
//     void display(){
//         cout << "Triangle" << endl;
//         cout<< "area"<<a2<<endl;
//         cout<< "perimeter"<<p2<<endl;

// }} ;
// class Rectangle:public Shape{
//     float a3,p3;
//     int l,b;
//     public :
//     void input(){
//         cout << "Enter length and breadth of rectangle: ";
//         cin >> l >> b;
//         }
//     void area(){
//         a3 = l * b ;
//     }    
//     void perimeter(){
//         p3 = 2 * (l + b);
//     }
//     void display(){
//         cout << "Rectangle" << endl;
//         cout<< "area"<<a3<<endl;
//         cout<< "perimeter"<<p3<<endl;
//         }
//     };

// int main (){
//     Shape * ptr;
//     Triangle t;
//     Rectangle r;
//     Circle c;
//     ptr=&t;
//     ptr->input();
//     ptr->area();



// }














#include<iostream>
using namespace std;

class Shape {
public:
    virtual void input() = 0;
    virtual void area() = 0;
    virtual void perimeter() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
    int r;
    float a1, p1;
public:
    void input()  {
        cout << "Enter radius of circle: ";
        cin >> r;
    }
    void area()  {
        a1 = 3.14 * r * r;
    }
    void perimeter()  {
        p1 = 2 * 3.14 * r;
    }
    void display()  {
        cout << "Circle" << endl;
        cout << "Area: " << a1 << endl;
        cout << "Perimeter: " << p1 << endl;
    }
};

class Triangle : public Shape {
    float a2, p2;
    int b, h;
public:
    void input()  {
        cout << "Enter base and height of triangle: ";
        cin >> b >> h;
    }
    void area()  {
        a2 = 0.5 * b * h;
    }
    void perimeter()  {
        p2 = b + h; // Note: This is not the actual perimeter of a triangle. Typically, you would need all three sides.
    }
    void display()  {
        cout << "Triangle" << endl;
        cout << "Area: " << a2 << endl;
        cout << "Perimeter: " << p2 << endl;
    }
};

class Rectangle : public Shape {
    float a3, p3;
    int l, b;
public:
    void input()  {
        cout << "Enter length and breadth of rectangle: ";
        cin >> l >> b;
    }
    void area()  {
        a3 = l * b;
    }
    void perimeter()  {
        p3 = 2 * (l + b);
    }
    void display()  {
        cout << "Rectangle" << endl;
        cout << "Area: " << a3 << endl;
        cout << "Perimeter: " << p3 << endl;
    }
};

int main() {
    Shape* ptr;
    Triangle t;
    Rectangle r;
    Circle c;

    ptr = &t;
    ptr->input();
    ptr->area();
    ptr->perimeter();
    ptr->display();

    ptr = &r;
    ptr->input();
    ptr->area();
    ptr->perimeter();
    ptr->display();

    ptr = &c;
    ptr->input();
    ptr->area();
    ptr->perimeter();
    ptr->display();

    return 0;
}













