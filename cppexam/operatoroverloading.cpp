#include <iostream>
using namespace std ;

class Box{
    private :
    int length,bredth,height,v;

    public:
    void getdata(){
        cout << "Enter length : ";
        cin >> length ;
        cout << "Enter bredth : ";
        cin >> bredth ;
        cout<< "enter the height";
        cin >> height ;
    }

    void volume(){
       int v=length * bredth * height ;
        cout << "Volume of box is : " << v << endl ;
    }

    // void operator +(Box bnew){
    //     cout << "Addition of two boxes " << endl ;
    //     int totalvol=0;
    //     totalvol=v+bnew.v;
    //     cout<<"Total "<<totalvol;
    //     }

     void operator +(Box b2){
        cout << "Addition of two boxes " << endl ;
        int totalvol;
        totalvol=v+b2.v;
        cout<<"Total "<<totalvol;
        }


    };
int main (){
    Box a;
    Box b;
    Box c;
    a.getdata();
    a.volume();
    b.getdata();
    b.volume();
    a+b ;
}