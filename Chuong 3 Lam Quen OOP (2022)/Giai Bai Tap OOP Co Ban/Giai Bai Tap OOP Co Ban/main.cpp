#include "HoSo.h"
#include "DanhSachHoSo.h"
//#pragma pack(1) // Tránh làm tròn bộ nhớ

int main() {
	//HoSo x;
	//cout << "\nSize of x = " << sizeof(x);
	//x.nhap();
	//x.xuat();

	//HoSo* x = new HoSo; // Tạo ra đối tượng con trỏ;
	//cout << "\nSize of x = " << sizeof(x);
	//x->nhap();
	//x->xuat();
	//delete x;

	DanhSachHoSo* x = new DanhSachHoSo;
	x->nhap();
	x->xuat();
	cout << "\nTong tien thu duoc = " << x->tinhTongTien();

	system("pause");
	return 0;
}