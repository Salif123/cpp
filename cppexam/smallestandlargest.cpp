#include<iostream>
using namespace std;

class Numbers{
    private:
    int x[100];
    public:
    void input(){
        for(int i=0;i<5;i++){
            cin>>x[i];
        }
    }
    void display(){
        for(int i=0;i<5;i++){
            cout<<x[i]<<" ";
        }
    }
    friend void largest(Numbers a);
    friend void smallest(Numbers b);
};

void largest(Numbers a){
    int max=a.x[0],i;
    for(i=0;i<5;i++){
        if(max<a.x[i]){
            max=a.x[i];
        }
        
    }
    cout<<"largest no is"<<max;
}

int main (){
    Numbers n;
    cout<<"Enter 5 numbers: ";
    n.input();
    largest(n);
}







