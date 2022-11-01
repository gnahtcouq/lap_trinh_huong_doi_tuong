#include "HocSinh.h"

void HocSinh::nhap() {
	fflush(stdin);
	cout << "\nNhap ten: ";
	getline(cin, ten);
	do {
		cout << "Nhap diem toan: ";
		cin >> diemToan;
		if (diemToan < 0 || diemToan > 10)
			cout << "\nNhap sai. Hay nhap lai (diem nam trong khoang 0 - 10).\n";
	} while (diemToan < 0 || diemToan > 10);
	do {
		cout << "Nhap diem van: ";
		cin >> diemVan;
		if (diemVan < 0 || diemVan > 10)
			cout << "\nNhap sai. Hay nhap lai (diem nam trong khoang 0 - 10).\n";
	} while (diemVan < 0 || diemVan > 10);
}

void HocSinh::xuat() {
	cout << "\nTen: " << ten;
	cout << "\nDiem toan: " << diemToan;
	cout << "\nDiem van: " << diemVan;
	cout << "\nDiem trung binh = " << tinhDiemTrungBinh();
}

float HocSinh::tinhDiemTrungBinh() {
	return (diemToan + diemVan) / 2;
}