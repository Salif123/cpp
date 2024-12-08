#include<iostream>
using namespace std;

class A{
    private:
    int a=2;
    public:
    void geta(){
        cout<<" value of a: ";
    }
    friend void sum(class A,class B);
};

class B{
    private:
    int b=9;
    public:
    void geta(){
        cout<<" value of b: ";
    }
    friend void sum(class A,class B);
};

void sum(class A a1 ,class B b1){
    cout<<a1.a+b1.b<<endl;
}

int main(){
    A a1;
    B b1;
    sum(a1,b1);
}