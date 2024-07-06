#include <bits/stdc++.h>
#include "bigInteger.h"
using namespace std;

//Sample test code with some examples
int main()
{
	BigInt first("123456789987654321859647231");
	cout << "The number of digits in first big integer = " << Length(first) << '\n';
	BigInt second(1234569);
	if (first > second) {
		cout << "first and second are equal!\n";
	}
	else
		cout << "Not equal!\n";
	BigInt third("1000000002586");
	BigInt fourth("1000008975645889756412366555");
	if (third < fourth) {
		cout << "third is smaller than fourth!\n";
	}
	BigInt fifth("1234569");
	if (fifth == second) {
		cout << "fifth is larger than fourth!\n";
	}

	// Printing all the numbers
	cout << "first = " << first << '\n';
	cout << "second = " << second << '\n';
	cout << "third = " << third << '\n';
	cout << "fourth = " << fourth<< '\n';
	cout << "fifth = " << fifth<< '\n';

	// Algebraic operations
	first++;
	cout << "After incrementing the value of first is : ";
	cout << first << '\n';
	BigInt sum;
	sum = (fourth + first);
	cout << "Sum of fourth and first = " << sum << '\n';
	BigInt product;
	product = first * third;
	cout << "Product of first and third = " << product << '\n';

	BigInt sixth("123456789987654321859647231");
	BigInt prod;
	prod = sixth * sixth;
	cout << "Square of sixth is = " << prod << '\n';
	BigInt sqroot;
	sqroot = sqrt(prod);
	cout<< "Square root of the product is = " << sqroot << '\n';

	// Print the 110th fibonacci, catalan and factorial of 110
	BigInt Fib, Cat, fact;
	Fib = NthFibonacci(110);
	Cat = NthCatalan(110);
	fact = Factorial(110);
	cout << "110th Fibonacci  = " << Fib <<'\n';
	cout << "110th catalan  = " << Cat <<'\n';
	cout << "Factorial of 110 = " << fact << '\n';
}
