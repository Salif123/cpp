#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    void putdata();
    void getdata();

    friend Complex add(Complex a,Complex b);
        
};
Complex add(Complex a,Complex b){
        Complex c3;
        c3.real=a.real+b.real;
        c3.img=a.img+b.img;
        return c3;
}

void Complex::putdata(){
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> img;
}

void Complex::getdata(){
    cout << "Complex Number: " << real << " + " << img << "i";
    
    }

    


    int main (){
        Complex c1,c2,c3;
        c1.putdata();
        c2.putdata();
        c1.getdata();
        c2.getdata();
        c3=add(c1,c2);
        c3.getdata();


    }