#include <iostream>
using namespace std;

void swap(int&, int&);

int main(){
    int x, y;
    cout << "Enter 2 numbers to swap" << endl;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    swap(x, y);
    cout << "After swap:" << endl;
    cout << "X: " << x << "\nY: " << y << endl;
    return 0;
}

void swap(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;


}