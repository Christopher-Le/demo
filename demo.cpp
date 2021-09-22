#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float a, b;

	cout << "insert a: ";
	cin >> a;
	cout << "insert b: ";
	cin >> b;

	// Sum
	float Sum = a + b;
	cout << "sum: " << Sum << endl;

	//product
	float product = a * b;
	cout << "Product: " << product << endl;
	
	//Quotient
	if ((a != 0) && (b != 0))
	{
		float Q = a / b;
		cout << "Quotient: " << Q << endl;
	}

	if ((a == 0) && (b != 0))
	{
		cout << "a cannot divided by b!";
		return 0;
	}

	if ((a != 0) && (b == 0))
	{
		cout << "b cannot divided by a!";
		return 0;
	}

	return 0;
}