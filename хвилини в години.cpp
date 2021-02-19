#include <iostream>
using namespace std;
int main ()
{
int n;
float m;
int p;
cout <<"Input minutes:" ;
cin >> n;
m = n/60;
p = n%60;
cout << "Hours: " << m << " Minutes: " << p << endl;

return 0;
}
