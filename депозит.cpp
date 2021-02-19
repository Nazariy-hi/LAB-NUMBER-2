#include <iostream>
using namespace std;
int main ()
{
	float m;
	int depositAmount ;
	int interestRate;
    float n ;
    int term ;
	int year = 1;
    cout <<"Enter amount invested:"<< endl;
    cin >> depositAmount;
    cout <<"Enter your increase rate:"<< endl;
    cin >>interestRate;
    cout <<"Enter the term of the deposit(in days):" << endl;
    cin >> term ;
    n = depositAmount * (interestRate / 100.) / 365. * term;
    m = depositAmount * (interestRate / 100.) / 365. * 30;
    cout << "Total amount at the end of the term: " << depositAmount + n <<endl;
    cout << "Profit from the deposit for the month: "  << m << endl;
	cout << "Entire term of the deposit (in days): " << term << " days" << endl;  	
	return 0;	
}
	
