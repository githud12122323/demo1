#include <iostream>
using namespace std;


int main()
{
	int dai, rong;
	cout << "nhap vao chieu dai ";
	cin >> dai;
	cout << "nhap vao chieu rong ";
	cin >> rong;
	int dientich = dai * rong;
	int chuvi = (dai + rong) * 2;
	cout << "dien tich hcn la : " << dientich << endl;
	cout << "chu vi hcn la : " << chuvi << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	int canh;
	cout << "nhap canh hinh vuong : ";
	cin >> canh;
	int dthv = canh * canh;
	int cvhv = canh * 4;
	cout << "dien tich hinh vuong : " << dthv << endl;
	cout << "chu vi hinh vuong : " << cvhv << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	int  a, b, c;
	cout << "nhap canh a hinh tam giac : ";
	cin >> a;
	cout << "nhap canh b hinh tam giac : ";
	cin >> b;
	cout << "nhap canh c hinh tam giac : ";
	cin >> c;
	double h = 1 / 2 * b * c;
	double s = 1 / 2 * a * h;
	double p = a + b + c;
	cout << "dien tich hinh tam giac 3 diem " << a << "," << b << "," << c << " la : " << s << endl;
	cout << "chu vi hinh tam giac 3 diem " << a << "," << b << "," << c << " la : " << p << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	int r;
	double pi = 3.14,C,S;
	cout << "nhap vao ban kinh r = ";
	cin >> r;
	C = 2 * pi * r;
	S = pi * r * r;
	cout << "dien tich hinh tron la : " << S << endl;
	cout << "chu vi hinh tron la : " << C << endl;




    
}
  




