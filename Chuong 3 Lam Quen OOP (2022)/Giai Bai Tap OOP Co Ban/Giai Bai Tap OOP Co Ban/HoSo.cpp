#include "HoSo.h"

void HoSo::nhap() {
	do {
		cout << "\nNhap so luong: ";
		cin >> soLuong;
		if (soLuong < 0)
			cout << "\nSo luong khong hop le. Xin kiem tra lai.\n";
	} while (soLuong < 0);
	do {
		cout << "\nNhap gia tien: ";
		cin >> giaTien;
		if (giaTien < 0)
			cout << "\nGia tien khong hop le. Xin kiem tra lai.\n";
	} while (giaTien < 0);
	do {
		cout << "\nCo thue hay khong?: ";
		cin >> checkThue;
		if (checkThue != 0 && checkThue != 1)
			cout << "\nLua chon khong hop le. Xin kiem tra lai.\n";
	} while (checkThue != 0 && checkThue != 1);
	if (checkThue == 1) {
		do {
			cout << "\nNhap vao loai thue (1: GST-7%, 0: PST-8%): ";
			cin >> loaiThue;
			if (loaiThue != 0 && loaiThue != 1)
				cout << "\nLoai thue khong hop le. Xin kiem tra lai.\n";
		} while (loaiThue != 0 && loaiThue != 1);
	}

}

void HoSo::xuat() {
	cout << "\nSo luong = " << soLuong;
	cout << "\nGia tien = " << giaTien;
	if (checkThue == 1) {
		cout << "\nMat hang nay co thue ";
		if (loaiThue == 1)
			cout << "GST";
		else
			cout << "PST";
	}
	else
		cout << "\nMat hang nay khong thue";
	cout << "\nSo tien phai tra = " << tinhTien();
}

float HoSo::tinhTien() {
	float tien = soLuong * giaTien;
	if (checkThue == 1) {
		if (loaiThue == 1)
			tien *= 1.07;
		else
			tien *= 1.08;
	}
	return tien;
}

HoSo::HoSo(void) {

}

HoSo::~HoSo(void) {

}