/*

Nhap vao thong tin 1 tam giac roi tinh ra chu vi, dien tich cua tam giac do

*/

#include <iostream>
#include <math.h>
using namespace std;

// Diem.h
class Diem {
private:
  float x, y;
public:
  void nhap();
  void xuat();
  // d1.tinhKhoangCach(d2);
  float tinhKhoangCach(Diem);
};

// TamGiac.h

// #include "Diem.h"
class TamGiac {
private:
  Diem A, B, C;
public:
  void nhap();
  void xuat();
  bool kiemTraTamGiacHopLe();
  float tinhChuVi();
  float tinhDienTich();
};

int main() {

  // Diem d1;
  // d1.nhap();
  // d1.xuat();

  // Diem *d1;
  // d1 = new Diem;
  // d1->nhap();
  // d1->xuat();
  // delete d1;

  TamGiac tg;
  tg.nhap();
  tg.xuat();
  float chuVi = tg.tinhChuVi();
  float dienTich = tg.tinhDienTich();

  cout << "\nChu vi = " << chuVi;
  cout << "Dien tich = " << dienTich;

  system("pause");
  return 0;
}

// Diem.cpp
void Diem::nhap() {
  cout << "\nNhap x = ";
  cin >> x;
  cout << "Nhap y = ";
  cin >> y;
}

void Diem::xuat() {
  cout << "(" << x << "," << y << ")";
}

float Diem::tinhKhoangCach(Diem d2) {
  return sqrt(pow(x - d2.x, 2) + pow(y - d2.y, 2));
}

// TamGiac.cpp
void TamGiac::nhap() {
  bool check;
  do {
    check = true;
    cout << "\nNhap diem A: ";
    A.nhap();
    cout << "\nNhap diem B: ";
    B.nhap();
    cout << "\nNhap diem C: ";
    C.nhap();

    check = kiemTraTamGiacHopLe();
    if (check == false)
      cout << "\n3 diem khong tao thanh tam giac. Xin kiem tra lai";
  } while (check == false);
}

void TamGiac::xuat() {
  cout << "\nA";
  A.xuat();
  cout << "\nB";
  B.xuat();
  cout << "\nC";
  C.xuat();
}

bool TamGiac::kiemTraTamGiacHopLe() {
  float AB = A.tinhKhoangCach(B);
  float AC = A.tinhKhoangCach(C);
  float BC = B.tinhKhoangCach(C);

  if (AB + AC <= BC || AB + BC <= AC || BC + AC <= AB)
    return false;
  return true;
}

float TamGiac::tinhChuVi() {
  float AB = A.tinhKhoangCach(B);
  float AC = A.tinhKhoangCach(C);
  float BC = B.tinhKhoangCach(C);

  return AB + AC + BC;
}

float TamGiac::tinhDienTich() {
  float AB = A.tinhKhoangCach(B);
  float AC = A.tinhKhoangCach(C);
  float BC = B.tinhKhoangCach(C);

  float nuaChuVi = tinhChuVi() / 2;

  return sqrt(nuaChuVi * (nuaChuVi - AB) * (nuaChuVi - AC) * (nuaChuVi - BC));
}