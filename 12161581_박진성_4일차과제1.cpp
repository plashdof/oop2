#include <iostream>
#include <functional>
using namespace std;


int fibonacci_Recursion(int);
int fibonacci(int);


int main()
{
	// �Ǻ���ġ ���� by �����Լ�

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


// �Ǻ���ġ ���� by ����Լ�

int fibonacci_Recursion(int n)
{
	if (n <= 2)
		return 1;
	else
		return fibonacci_Recursion(n - 1) + fibonacci_Recursion(n - 2);
}


// �Ǻ���ġ ���� by ����
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


