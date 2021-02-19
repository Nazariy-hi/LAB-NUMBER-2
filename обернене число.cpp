#include <iostream>
using namespace std;
int main()
{
int n;
int rev_num;
n =5876;
rev_num = ((n%10) * 1000 ) + ((n%100) / 10 * 100) + ((n%1000) / 100 * 10) + ((n%10000) / 1000 * 1) ;
cout << rev_num << endl;
return 0;
}

