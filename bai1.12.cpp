#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swapping
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

