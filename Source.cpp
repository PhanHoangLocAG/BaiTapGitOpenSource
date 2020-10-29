#include <iostream>

using namespace std;
 
 
int hieu(int a, int b)
{
	 int hieu = 0;
	 hieu = a - b;
	 return hieu;
}

int tong(int a, int b) {
	return a + b;
};

 

int tich(int a, int b){
	return a*b;
};

float thuong(int a, int b) {
	if(b!=0){
		return a / b;
	} else {
		return 0;
	}
};

int tinhChuViHinhChuNhat(int a,int b)
{
	int ketqua=0;
	ketqua = 2*(a +b);
	cout <<endl;
	return ketqua;
}
int tinhDienTichHinhChuNhat(int a,int b)
{
	int ketqua=0;
	ketqua = a+b ;
	return ketqua;
}

float chuvihinhvuong(int a){
	return 4*a;
};
float dientichhinhvuong(int a){
	return a*a;
};






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
	cout<<"hello word";
	return 0;
}
