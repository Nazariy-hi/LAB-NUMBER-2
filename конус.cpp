#include <iostream>
using namespace std;
int main ()
{
const float pi = 3.14159;
int r;
int h;
float v;
cout << "Input cone's radius.";
cin >> r;
cout << "Input cone's height.";
cin >>  h;
v = (1./3) * pi * (r*r) * h;
	cout << "The volume of the cone is " << v;

return 0;
}
