#include <iostream>

using namespace std;

int main()
{
    float x,y;
    cout << "...Program That Determines The Larger Number Between Two Numbers..." << endl;
    cout << "\nEnter Your First Number: ";
    cin >>x;
    cout << "Enter Your Second Number: ";
    cin >>y;
    if (x>y) {
        cout << "\nYour First Number("<<x<<") Is Bigger Than Your Second Number("<<y<<")" << endl;
    }else if (y>x) {
        cout << "\nYour Second Number("<<y<< ") Is Bigger Than Your First Number("<<x<<")" << endl;
    }else {
        cout << "\nBoth Numbers Are Equal" << endl;
    }
    return 0;
}
