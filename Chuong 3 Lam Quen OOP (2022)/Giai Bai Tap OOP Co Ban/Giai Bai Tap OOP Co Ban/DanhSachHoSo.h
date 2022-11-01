#pragma once
#include "HoSo.h"
#include <vector>
class DanhSachHoSo {
private:
	vector<HoSo *> List;
public:
	void nhap();
	void xuat();
	float tinhTongTien();
};

