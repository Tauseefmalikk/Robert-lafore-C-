#include<iostream>
using namespace std;
float kgstolbs(float kgs)
{
    return kgs/0.452;
}
int main()
{
    float kg;
    cout << "enter the weight in kgs" << endl;
    cin >> kg;
    cout <<"The "<<kg<<" kg="<<kgstolbs(kg)<<"in lbs" << endl;
}