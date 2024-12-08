#include<iostream>
using namespace std;

class Book{
    public :
    string title;
    string name;
    void getdata(){
        cout << "Enter the title of the book : ";
        cin >> title;
        cout << "Enter the name of the author : ";
        cin >> name;
    }

    };

class Textbook:public Book{
    public :
    string subject;
    char std;
    void getdata(){
        Book::getdata();
        cout << "Enter the subject of the book : ";
        cin >> subject;
        cout << "Enter the standard of the book : ";
        cin >> std;
        }
    void display(){
        cout << "Title of the book : " << title << endl;
        cout << "Name of the author : " << name << endl;
        cout << "Subject of the book : " << subject << endl;
        cout << "Standard of the book : " << std << endl;
        }
    };

class Novel:public Book{
    public :
    string genre;
    int pages;
    void getdata(){
        Book::getdata();
        cout << "Enter the genre of the novel : ";
        cin >> genre;
        cout << "Enter the number of pages in the novel : ";
        cin >> pages;
        }
    void display(){
        cout << "Title of the novel : " << title << endl;
        cout << "Name of the author : " << name << endl;
        cout << "Genre of the novel : " << genre << endl;
        cout << "Number of pages in the novel : " << pages << endl;
            }    
};

int main (){
    Textbook t;
    Novel n;
    Book b;
    Book * ptr;
    ptr = &b;
    cout<<"enter text book";
    ptr->getdata();
    ((Textbook*)ptr)->getdata();
     ((Textbook*)ptr)->display();
    
}


    













