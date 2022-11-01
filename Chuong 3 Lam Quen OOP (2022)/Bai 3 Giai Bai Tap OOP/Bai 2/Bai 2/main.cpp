#include "PhanSo.h"
#include <vector>

int main() {
	//PhanSo ps1;
	//ps1.nhap();
	//ps1.xuat();

	//float result = ps1.tinhKetQuaPhanSo();
	//if (result > 0)
	//	cout << "\nps1 > 0";
	//else if (result < 0)
	//	cout << "\nps1 < 0";
	//else
	//	cout << "\nps1 = 0";

	//cout << "\nPhan so sau khi rut gon = ";
	//ps1.rutGon();
	//ps1.xuat();


	PhanSo ps1, ps2;
	cout << "\nNhap ps1: ";
	ps1.nhap();
	cout << "\nNhap ps2: ";
	ps2.nhap();

	PhanSo tong = ps1.tinhTong(ps2);
	PhanSo hieu = ps1.tinhHieu(ps2);
	PhanSo tich = ps1.tinhTich(ps2);
	PhanSo thuong = ps1.tinhThuong(ps2);

	cout << "\nTong = ";
	tong.rutGon();
	tong.xuat();
	cout << "\nHieu = ";
	hieu.rutGon();
	hieu.xuat();
	cout << "\nTich = ";
	tich.rutGon();
	tich.xuat();
	cout << "\nThuong = ";
	thuong.rutGon();
	thuong.xuat();

	//vector<PhanSo> arr;
	//arr.resize(5);// co 5 phan so
	//PhanSo tong = arr[0];
	//int size = arr.size();
	//for (int i = 1; i < size; i++) {
	//	tong = tong.tinhTong(arr[i]);
	//}

	system("pause");
	return 0;
}