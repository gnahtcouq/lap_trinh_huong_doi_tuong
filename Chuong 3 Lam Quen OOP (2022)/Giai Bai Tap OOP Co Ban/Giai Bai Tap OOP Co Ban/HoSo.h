#pragma once
#include <iostream>
using namespace std;

class HoSo {
private:
	int soLuong;
	float giaTien;
	int checkThue; // 1: Co, 0: Khong
	int loaiThue; // GST, PST
public:
	void nhap();
	void xuat();
	float tinhTien();
	HoSo(void); // Phương thức khởi tạo mặc định (default constructor)
	~HoSo(void); // Phương thức hủy (destructor)
};

