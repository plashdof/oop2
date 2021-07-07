// 12161581 박진성
#include <iostream>
#include <functional>
using namespace std;

int main()
{
	cout << "팩토리얼 숫자 갯수(1~10) : " << endl;
	int* p;
	int count = 0;

	cin >> count;
	p = new int[count];

	for (auto i = 0; i < count; ++i)
		cin >> *(p + i);

	function<int(int)> factorial = [&factorial](int n)->int {
		if (n <= 1)
			return 1;
		else
			return n * factorial(n - 1);
	};


	for (auto i = 0; i < count; ++i)
		cout << factorial(p[i]) << endl;

	delete[] p;
	


	return 0;
}