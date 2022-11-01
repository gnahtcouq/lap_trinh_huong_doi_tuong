#include "PhanSo.h"

void PhanSo::nhap() {
	cout << "\nNhap tu so: ";
	cin >> tuSo;
	do {
		cout << "Nhap mau so: ";
		cin >> mauSo;
		if (mauSo == 0)
			cout << "\nMau so phai khac 0. Xin kiem tra lai.\n";
	} while (mauSo == 0);
}

void PhanSo::xuat() {
	if (mauSo < 0) {
		tuSo *= -1;
		mauSo *= -1;
	}
	cout << tuSo << "/" << mauSo;
}

float PhanSo::tinhKetQuaPhanSo() {
	return (float)tuSo / mauSo;
}

int timUCLN(int a, int b) {
	//Quy chuan ve duong
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	//Xu ly
	//int min = a < b ? a : b;
	//int max = a > b ? a : b;

	//if (max % min == 0)
	//	return min;
	//for (int i = min / 2; i >= 1; i--) {
	//	if (min % i == 0 && max % i == 0)
	//		return i;
	//}

	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

void PhanSo::rutGon() {
	int ucln = timUCLN(tuSo, mauSo);
	tuSo /= ucln;
	mauSo /= ucln;
}

// a/b + c/d = (a * d + b * c) / (b * d)
// ps1.tinhTong(ps2);
PhanSo PhanSo::tinhTong(PhanSo ps) {
	PhanSo tong;
	tong.tuSo = this->tuSo * ps.mauSo + ps.tuSo * this->mauSo;
	tong.mauSo = this->mauSo * ps.mauSo;
	return tong;
}

PhanSo PhanSo::tinhHieu(PhanSo ps) {
	PhanSo hieu;
	hieu.tuSo = this->tuSo * ps.mauSo - ps.tuSo * this->mauSo;
	hieu.mauSo = this->mauSo * ps.mauSo;
	return hieu;
}

PhanSo PhanSo::tinhTich(PhanSo ps) {
	PhanSo tich;
	tich.tuSo = this->tuSo * ps.tuSo;
	tich.mauSo = this->mauSo * ps.mauSo;
	return tich;
}

// ps1/ps2 <=> ps1 * 1/ps2
PhanSo PhanSo::tinhThuong(PhanSo ps) {
	PhanSo nghichDao;
	nghichDao.tuSo = ps.mauSo;
	nghichDao.mauSo = ps.tuSo;
	return this->tinhTich(nghichDao);
	//return nghichDao.tinhTich(*this);
}