#include <iostream>
#include <functional>
using namespace std;


int fibonacci_Recursion(int);
int fibonacci(int);


int main()
{
	// 피보나치 구현 by 람다함수

	function<int(int)> fibonacci_Lamda = [&fibonacci_Lamda](int n)->int {
		if (n <= 2)
			return 1;
		else
			return fibonacci_Lamda(n - 1) + fibonacci_Lamda(n - 2);
	};

	cout << fibonacci(10) << endl;
	cout << fibonacci_Lamda(10) << endl;
	cout << fibonacci_Recursion(10) << endl;

	return 0;
}


// 피보나치 구현 by 재귀함수

int fibonacci_Recursion(int n)
{
	if (n <= 2)
		return 1;
	else
		return fibonacci_Recursion(n - 1) + fibonacci_Recursion(n - 2);
}


// 피보나치 구현 by 루프
int fibonacci(int n)
{
	int result = 0;
	int temp1 = 1, temp2 = 1;
	if (n <= 2)
		return 1;
	else
	{
		for (int i = 3; i <= n; i++)
		{
			result = temp1 + temp2;
			temp1 = temp2;
			temp2 = result;
		}

		return result;
	}
}


