#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    float inch;
    public:
    void getdata(){
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inch: ";
        cin>>inch;

    }
    void operator +(Distance d2){
        feet = feet + d2.feet;
        inch = inch + d2.inch;
        cout<< "total is "<<feet<<inch<<endl;
    }
    friend void operator <(Distance d1,Distance d2);
};


 void operator <(Distance d1,Distance d2){
    if(d1.feet<d2.feet){
        cout<<"d1 is less than d2"<<endl;

    }
    else if(d1.feet>d2.feet){
        cout<<"d1 is greater than d2"<<endl;
    }
    else{
        if(d1.inch<d2.inch){
            cout<<"d1 is less than d2"<<endl;
            }
            else if(d1.inch>d2.inch){
                cout<<"d1 is greater than d2"<<endl;
                }
                else{
                    cout<<"d1 is equal to d2"<<endl;
                    }
                    }
 }

int main(){
    Distance d1,d2;
    d1.getdata();
    d2.getdata();
    d1+d2;
    d1<d2;
}