# include<iostream>
using namespace std;
void rchar(char ch,int n)
{
    for(int j=0;j<n;j++)
    cout << ch;
}
int main()
{
  char c;
  int n;
  cout << "enter the character" << endl;
  cin >> c;
  cout << "enter the number of times you want to dislplay" << endl;
  cin >> n;
  rchar(c,n);
  return 0;
}