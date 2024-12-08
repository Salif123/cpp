#include<iostream>
using namespace std;

class Vehicle{
    public:
    int price;
    int mileage;
    void getdata(){
        cout<<"Enter price: ";
        cin>>price;
        cout<<"Enter mileage: ";
        cin>>mileage;
    }

};
class Car:public Vehicle{
    public:
    
    int no_of_doors;
    string name;
    int modelNo;
    void takedatacar(){
        Vehicle::getdata();
        cout<<"Enter name of car: ";
        cin>>name;
        cout<<"Enter model number: ";
        cin>>modelNo;
        cout<<"Enter number of doors: ";
        cin>>no_of_doors;
        }
    void displaycar(){
        cout<<"Price: "<<price<<endl;
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Name of car: "<<name<<endl;
        cout<<"Model number: "<<modelNo<<endl;
        cout<<"Number of doors: "<<no_of_doors<<endl;

    }    
        };
class Bike:public Vehicle{
    public:
    string name;
    int modelNo;
    int no_seat;
    void takedatabike(){
        // Vehicle::getdata();
        cout<<"Enter name of bike: ";
        cin>>name;
        cout<<"Enter model number: ";
        cin>>modelNo;
        cout<<"Enter number of seats: ";
        cin>>no_seat;
        
    }
    void displaybike(){
        cout<<"Price: "<<price<<endl;
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Name of bike: "<<name<<endl;
        cout<<"Model number: "<<modelNo<<endl;
        cout<<"Number of seats: "<<no_seat<<endl;

    }

};   


int main(){
    Car c;
    Bike b;
    cout<<"Enter data for car: "<<endl;
    c.takedatacar();
    cout<<"Enter data for bike: "<<endl;
    b.takedatabike();
    //
    // b.getdata();
    cout<<"Data for car: "<<endl;
    c.displaycar();
    cout<<"Data for bike: "<<endl;
    b.displaybike();
    return 0;
    
}
