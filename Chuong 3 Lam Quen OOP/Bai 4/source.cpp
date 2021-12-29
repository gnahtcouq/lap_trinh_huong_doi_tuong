/* 

Thiet ke chuong trinh tinh tong tien cua doanh thu ban hang

1 bo ho so gom co: so luong, gia tien, thue hay khong?

Co 2 loai thue: GST 7%, PST 8%

*/


// #pragma once // Tranh bi dung do thu vien, tuc la moi thu vien trung nhau chi su dung 1 lan

// #pragma pack(1) // Tranh lam tron bo nho

// class HoSo {
// public:
//   HoSo(void); // Phuong thuc khoi tao mac dinh(default constructor)
//   ~HoSo(void); // Phuong thuc pha huy(destructor)
// };

// private: nhung phuong thuc va thuoc tinh duoc cai dat boi tu khoa nay se co pham vi hoat dong trong cai lop do
// public: nhung phuong thu cva thuoc tinh duoc cai dat boi tu khoa nay se co pham vi hoat dong tren moi lop

// Tat ca nhung thuoc tinh thi khai bao tam vuc la private

// thuoc tinh: la nhung thong tin di kem theo doi tuong
// phuong thuc: la nhung hanh dong cua doi tuong

// Luu y: thuoc tinh la danh tu
//        con phuong thuc la dong tu

#include <iostream>
using namespace std;


// HoSo.h
class HoSo {
private:
  int soLuong;
  float giaTien;
  int kiemTraThue; // 1: co thue, 0: khong thue
  int loaiThue; // Co 2 loai la: GST & PST
public:
  void nhap();
  void xuat();
  float tinhTien();
  HoSo(void);
  ~HoSo(void);
};

int main() {
  // HoSo h1;
  // cout << "\nsizeof(h1) = " << sizeof(h1);
  // h1.nhap();
  // h1.xuat();

  HoSo *h1 = new HoSo; // Tao ra doi tuong con tro. Cap phat bo nho
  cout << "\nsizeof(h1) = " << sizeof(h1);

  h1->nhap();
  h1->xuat();
  delete(h1); // Giai phong bo nho

  system("pause");
  return 0;
}

/* <Kieu du lieu> <Ten class>::<Ten phuong thuc>(Danh sach tham so neu co) */

// HoSo.cpp
void HoSo::nhap() {
  do {
    cout << "\nNhap vao so luong: ";
    cin >> soLuong;

    if (soLuong < 0)
      cout << "\nSo luong khong hop le. Xin kiem tra lai" << endl;
  } while (soLuong < 0);

  do {
    cout << "Nhap vao gia tien: ";
    cin >> giaTien;

    if (giaTien < 0)
      cout << "\nGia tien khong hop le. Xin kiem tra lai" << endl;
  } while (giaTien < 0);

  do {
    cout << "Co thue hay khong ? (1: Co, 0: Khong) ";
    cin >> kiemTraThue;

    if (kiemTraThue != 0 && kiemTraThue != 1)
      cout << "\nLua chon khong hop le. Xim kiem tra lai" << endl;
  } while (kiemTraThue != 0 && kiemTraThue != 1);

  if (kiemTraThue == 1)
    do {
      cout << "\nNhap vao loai thue (1: GST - 7%, 0: PST - 8%) ";
      cin >> loaiThue;
      if (loaiThue != 0 && loaiThue != 1)
        cout << "\nLoai thue khong hop le. Xin kiem tra lai" << endl;
    } while (loaiThue != 0 && loaiThue != 1);

}

void HoSo::xuat() {
  cout << "\nSo luong: " << soLuong;
  cout << "\nGia tien: " << giaTien;
  if (kiemTraThue == 1) {
    if (loaiThue == 1)
      cout << "\nMat hang nay co thue GST 7%";
    else
      cout << "\nMat hang nay co thue PST 8%";
  }
  else
    cout << "\nMat hang nay khong thue";
  cout << "\nSo tien phai tra la: " << tinhTien();
}

float HoSo::tinhTien() {
  float tien = soLuong * giaTien;
  if (kiemTraThue == 1) {
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