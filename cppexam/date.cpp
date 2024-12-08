#include <iostream>
using namespace std;

class Date {
public:
    int date, month, year;
    void addDate() {
        cout << "Enter Date: ";
        cin >> date;
        cout << "Enter Month: ";
        cin >> month;
        cout << "Enter Year: ";
        cin >> year;
    }
    void operator--() {
        date--;
    }
    friend ostream& operator<<(ostream& os, const Date& d) {
        os << d.date << "/" << d.month << "/" << d.year;
        return os;
    }
};

int main() {
    Date d;
    d.addDate();
    cout << "Before decrement: " << d << endl;
    --d;
    cout << "After decrement: " << d << endl;
    return 0;
}