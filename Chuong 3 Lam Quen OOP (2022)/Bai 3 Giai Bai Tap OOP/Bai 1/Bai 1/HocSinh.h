#pragma once
#include <iostream>
#include <string>
using namespace std;

class HocSinh {
private:
	string ten;
	float diemToan, diemVan;
public:
	void nhap();
	void xuat();
	float tinhDiemTrungBinh();
};