#include<iostream>
using namespace std;

 int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

}

float swap(float &a,float &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=5,b=10;
    float c=2,d=3;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"After swap a="<<a<<" b="<<b<<endl;
    swap(c,d);
    cout<<" swap c="<<c<<" d="<<d<<endl;
}