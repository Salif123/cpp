#include<iostream>
using namespace std;

class Box{
    private:
    int n;
    public:
    static int count;

    void getdata(){
        count++;
    }
    static void display(){
        cout << "Total number of objects: " << count << endl;
    }

};


int Box:: count=0;
int main(){
    Box b1, b2, b3;
    b1.getdata();
    b1.display();
    b2.getdata();
    b2.display();
    b3.getdata();
    b3.display();
}














