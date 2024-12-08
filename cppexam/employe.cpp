#include<iostream>
using namespace std;

class Dept{
    public:
    int deptid;
    string deptname;
    void getdata(){
        cout<<"Enter department id: ";
        cin>>deptid;
        cout<<"Enter department name: ";
        cin>>deptname;
    }
    
};

class Info{
    public:
    int infoid;
    string infoname;
    string address;
    void readdata(){
        cout<<"Enter info id: ";
        cin>>infoid;
        cout<<"Enter info name: ";
        cin>>infoname;
        cout<<"Enter address: ";
        cin>>address;
        }



};

class Employe:public Info ,public  Dept{
    public:
    void readdata(){
        Info::readdata();
        Dept::getdata();
    }
    void display(){
        cout<<"Employee Info: "<<endl;
        cout<<"Info id: "<<infoid<<endl;
        cout<<"Info name: "<<infoname<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Department Info: "<<endl;
        cout<<"Department id: "<<deptid<<endl;
        cout<<"Department name: "<<deptname<<endl;


    }
};

int main(){
    Employe e1;
    e1.readdata();
    e1.getdata();
    e1.display();

}