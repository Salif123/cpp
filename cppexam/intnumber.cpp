#include<iostream>
using namespace std;

class Int_num{
    public:
    int num1;
    int num2;
    void getdata(){
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;

    }
};

class float_num{
    public:
    float num3;
    float num4;
    void getfloat(){
        cout<<"Enter first float number: ";
        cin>>num3;
        cout<<"Enter second float number: ";
        cin>>num4;
    }

};
class Addition:public Int_num{
    public:
    void add(){
        cout<< "adding two number";
        int sum=num1+num2;
        cout<<"Sum is: "<<sum<<endl;
    }
};
class Diff: public Int_num{
    public:
    void diff(){
        cout<<"Subtracting two number";
        int diff=num1-num2;
        cout<<"Difference is: "<<diff<<endl;
    }
};

class Mult: public float_num{
    public:
    void mult(){
        cout<<"Multiplying two float number";
        float product=num3*num4;
        cout<<"Product is: "<<product<<endl;
    
            }

};

class Div:public float_num{
    public:
    void div(){
        cout<<"Dividing two float number";
        float div=num3/num4;
        cout<<"Division is: "<<div<<endl;
    }
};

int main (){
    
}