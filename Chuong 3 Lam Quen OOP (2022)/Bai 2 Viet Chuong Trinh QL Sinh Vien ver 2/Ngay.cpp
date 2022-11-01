#include "Ngay.h"

void Ngay::nhap() {
	cout << "\n\tNgay: ";
	cin >> ngay;
	cout << "\tThang: ";
	cin >> thang;
	cout << "\tNam: ";
	cin >> nam;
}

void Ngay::xuat() {
	cout << ngay << "/" << thang << "/" << nam;
}