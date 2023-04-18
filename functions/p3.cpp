#include<iostream>
using namespace std;
float lbstokg(float pounds)
{
    float kilograms=0.45*pounds;
    return kilograms;
}
int main()
{
    float lbs,kgs;
    cout << "enter the weight in pounds" << endl;
    cin >> lbs;
    kgs=lbstokg(lbs);
    cout << "your weight in kgs=" << kgs << endl;
}