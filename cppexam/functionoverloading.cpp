#include<iostream>
using namespace std;

void area(int a, int b){
    int area = a * b;
    cout << "Area of rectangle is: " << area << endl;
}

void area(float r){
    float area = 3.14 * r * r;
    cout << "Area of circle is: " << area << endl;
}

void area(float x,float y){
    float area = x * y * 0.5;
    cout << "Area of triangle is: " << area << endl;
}

int main(){
    int a, b;
    float x,y;
    float r;
    cout << "Enter length and breadth of rectangle: ";
    cin >> a >> b;
    area(a,b);
    cout<< "enter radius";
    cin >> r;
    area(r);
    cout << "Enter base and height of triangle: ";
    cin >> a >> b;
    area(a,b);
}