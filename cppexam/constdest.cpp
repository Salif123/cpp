#include<iostream>
using namespace std;

class Volume{
    private:
    int l,b,h;

    public:
    void calculateVolume(){
        cout<<"Volume of the box is: "<<l*b*h<<endl;
    }
    Volume() {
    l=1;
    b=4;
    h=6;
    }
    Volume(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }
    Volume(Volume &a){
        l=a.l;
        b=a.b;
        h=a.h;
    }
};

int main (){
    Volume v1;
    Volume v2(1,2,3);
    Volume v3(v2);
    v1.calculateVolume();
    v2.calculateVolume();
    v3.calculateVolume();
}










