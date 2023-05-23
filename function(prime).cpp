// function(prime).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool prime(int p)
{
	bool isprime = true;
	if (p==0 || p==1)
	{
		isprime = false;
	}
	
	for (int i = 2; i <= p-1; i++)
	{
		if (p % i == 0)
		{
			isprime = false;
			break;
		}
	}
	return isprime;
}
int main()
{
	int p;
	cout << "enter number" << endl;
	cin >> p;
	if (prime(p))
	{
		cout << p << " is prime number" << endl;
	}
	else
	{
		cout << p << " is not prime number" << endl;
	}
}

