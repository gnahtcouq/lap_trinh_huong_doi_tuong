#include "DanhSachHoSo.h"

void DanhSachHoSo::nhap() {
	int choose;
	int count = 1;
	do {
		cout << "\n----------MENU--------\n";
		cout << "\n1. Nhap ho so";
		cout << "\n0. Ket thuc";
		cout << "\n----------------------\n";

		do {
			cout << "\nNhap vao lua chon cua ban: ";
			cin >> choose;
			if (choose != 0 && choose != 1)
				cout << "\nLua chon khong hop le. Xin kiem tra lai.\n";
		} while (choose != 0 && choose != 1);

		if (choose == 1) {
			cout << "\n\n\tNHAP THONG TIN HO SO THU " << count++ << "\n";
			HoSo* x = new HoSo;
			x->nhap();
			List.push_back(x);
		}
	} while (choose != 0);
}

void DanhSachHoSo::xuat() {
	for (int i = 0; i < List.size(); i++) {
		cout << "\n\n\tTHONG TIN BO HO SO THU " << i + 1 << "\n";
		List[i]->xuat();
	}
}

float DanhSachHoSo::tinhTongTien() {
	float tong = 0;
	for (int i = 0; i < List.size(); i++)
		tong += List[i]->tinhTien();
	return tong;
}