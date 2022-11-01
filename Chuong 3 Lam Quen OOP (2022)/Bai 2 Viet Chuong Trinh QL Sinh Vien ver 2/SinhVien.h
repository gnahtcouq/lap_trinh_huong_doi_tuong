#pragma once
#include "Ngay.h"
#include <string>

class SinhVien {
private:
	string ten;
	float diemToan, diemVan;
	Ngay ngaySinh;
public:
	void nhap();
	void xuat();
	float tinhDiemTrungBinh();
};

