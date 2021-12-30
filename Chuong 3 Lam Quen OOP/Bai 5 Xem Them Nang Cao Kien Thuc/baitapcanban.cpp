#include <iostream>
using namespace std;

class PhanSo {
private:
  int tuSo, mauSo;
public:
  void nhap();
  void xuat();
  void rutGon();
  PhanSo tinhTong(PhanSo);
  PhanSo tinhHieu(PhanSo);
  PhanSo tinhTich(PhanSo);
  PhanSo tinhThuong(PhanSo);
};


int main() {
  PhanSo ps1, ps2;
  ps1.nhap();
  ps1.xuat();

  ps2.nhap();
  ps2.xuat();

  PhanSo tong = ps1.tinhTong(ps2);
  cout << "\nTong ps1 + ps2 = ";
  tong.rutGon();
  tong.xuat();

  PhanSo hieu = ps1.tinhHieu(ps2);
  cout << "\nHieu ps1 - ps2 = ";
  hieu.rutGon();
  hieu.xuat();

  PhanSo tich = ps1.tinhTich(ps2);
  cout << "\nTich ps1 * ps2 = ";
  tich.rutGon();
  tich.xuat();

  PhanSo thuong = ps1.tinhThuong(ps2);
  cout << "\nThuong ps1 / ps2 = ";
  thuong.rutGon();
  thuong.xuat();

  system("pause");
  return 0;
}

void PhanSo::nhap() {
  cout << "\nNhap tu so: ";
  cin >> tuSo;
  do {
    cout << "Nhap mau so: ";
    cin >> mauSo;
    if (mauSo == 0)
      cout << "\nMau so phai khac 0. Xin kiem tra lai" << endl;
  } while (mauSo == 0);
}

void PhanSo::xuat() {
  cout << tuSo << "/" << mauSo;
}

int timUCLN(int a, int b) {
  if (a < 0)
    a *= -1;
  if (b < 0)
    b *= -1;

  if (a == 0 && b != 0)
    return b;
  if (b == 0 && a != 0)
    return a;

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

PhanSo PhanSo::tinhTong(PhanSo b) {
  PhanSo tong;
  tong.tuSo = tuSo * b.mauSo + mauSo * b.tuSo;
  tong.mauSo = mauSo * b.mauSo;
  return tong;
}

PhanSo PhanSo::tinhHieu(PhanSo b) {
  PhanSo hieu;
  hieu.tuSo = tuSo * b.mauSo - mauSo * b.tuSo;
  hieu.mauSo = mauSo * b.mauSo;
  return hieu;
}

PhanSo PhanSo::tinhTich(PhanSo b) {
  PhanSo tich;
  tich.tuSo = tuSo * b.tuSo;
  tich.mauSo = mauSo * b.mauSo;
  return tich;
}

PhanSo PhanSo::tinhThuong(PhanSo b) {
  PhanSo b_nghichdao;
  b_nghichdao.tuSo = b.mauSo;
  b_nghichdao.mauSo = b.tuSo;
  return (*this).tinhTich(b_nghichdao);
}