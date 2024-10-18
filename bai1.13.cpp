#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap vao N : ";
	cin >> n;
	cout << "cac so chan giua 1 va N la ";
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			cout << i << " ";

		}

	}
	cout << endl;
	return 0;
}


