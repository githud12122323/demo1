#include <iostream>
using namespace std;

int main()
{
	int first = 0, second = 1, next = 0;
	cout << "day fibonacci cho den khi so hang <= 1000 : " << endl;
	cout << first << " " << second << " ";
	while (next <= 1000) {
		next = first + second;
		if (next > 1000)break;
		cout << next << " ";
		first = second;
		second = next;
	}
	cout << endl;
	return 0;
}

