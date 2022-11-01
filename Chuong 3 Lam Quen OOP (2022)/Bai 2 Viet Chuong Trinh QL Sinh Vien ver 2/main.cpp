#include "SinhVien.h"

int main() {
	SinhVien sv1;
	sv1.nhap();
	sv1.xuat();
	float dtb = sv1.tinhDiemTrungBinh();
	cout << "\nDiem trung binh = " << dtb;

	system("pause");
	return 0;
}