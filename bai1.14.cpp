#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "nhap 1 so nguyen le duong n : ";
	cin >> n;
	for (int i = 1; i <= n; i += 2) {
		sum += i;

	}
	cout << "tong cua day la : " << sum << endl;
	return 0;
}


