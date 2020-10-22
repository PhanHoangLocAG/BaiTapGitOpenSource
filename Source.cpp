#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	 int hieu = 0;
	 hieu = a - b;
	 return hieu;
}
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT" << endl;
	cout << "nhap a"<< endl; 
	cin >> a;
	cout << "nhap b" << endl;
	cin >> b;
	cout << "hieu cua a va b la: " <<hieu(a,b);
	system("pause");
	return 0;
}