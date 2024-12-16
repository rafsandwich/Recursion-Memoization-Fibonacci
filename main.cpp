#include<iostream>
using namespace std;

// 1. basic fibonacci approach, a higher number will take some time to compute
// in simple recursion, the time grows exponentially with the input n

//int Fib(int n) {
//	if (n <= 1)
//	{
//		return n;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n;
//	cout << "Input any n: ";
//	cin >> n;
//
//	int result = Fib(n);
//	cout << result;
//}


// 2. below is recursion with memoization
// iterative implemntation would be better in terms of memory, but as good as it in terms of time (for larger values of n)

// same copy is accessible to all calls of method Fib() and Main()
// what is the maximum value of input that is being given?
int F[51]; 

int Fib(int n) {
	if (n <= 1)
	{
		return n;
	}

	// if F[n] is not equal to -1, it's in the memory and already calculated, so return F[n]
	if (F[n] != -1) 
	{
		return F[n];
	}
	
	// else, we calculate F[n] and then return it
	F[n] = Fib(n - 1) + Fib(n - 2);
	return F[n];
}

int main()
{
	// if F[i] = -1, F[i] is not calculated yet
	for (int i = 0; i < 51; i++)
	{
		F[i] = -1; 
	}

	// F[0] = 0; F[1] = 1; to remove first Fib() if block

	int n;
	cout << "Input any n: ";
	cin >> n;

	int result = Fib(n);
	cout << result;
}