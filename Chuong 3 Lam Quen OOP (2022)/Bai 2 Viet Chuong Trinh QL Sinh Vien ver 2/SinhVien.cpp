#include "SinhVien.h"

void SinhVien::nhap() {
	fflush(stdin);
	cout << "\nNhap ten: ";
	getline(cin, ten);
	cout << "Nhap diem toan: ";
	cin >> diemToan;
	cout << "Nhap diem van: ";
	cin >> diemVan;
	cout << "Nhap ngay sinh: ";
	ngaySinh.nhap();
}

void SinhVien::xuat() {
	cout << "\nTen: " << ten;
	cout << "\nDiem toan: " << diemToan;
	cout << "\nDiem van: " << diemVan;
	cout << "\nNgay sinh: ";
	ngaySinh.xuat();
}

float SinhVien::tinhDiemTrungBinh() {
	return (diemToan + diemVan) / 2;
}