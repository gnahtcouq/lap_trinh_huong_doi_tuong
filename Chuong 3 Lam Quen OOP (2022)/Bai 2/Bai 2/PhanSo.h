#pragma once
#include <iostream>
using namespace std;

class PhanSo {
private:
	int tuSo, mauSo;
public:
	void nhap();
	void xuat();
	float tinhKetQuaPhanSo();
	void rutGon();
	PhanSo tinhTong(PhanSo);
	PhanSo tinhHieu(PhanSo);
	PhanSo tinhTich(PhanSo);
	PhanSo tinhThuong(PhanSo);
};

