#include <iostream>
using namespace std;

class PhanSo {
private:
  int tuSo, mauSo;
public:
  void nhapPhanSo();
  void xuatPhanSo();
  PhanSo tinhTong(PhanSo);
  PhanSo tinhHieu(PhanSo);
  PhanSo tinhThuong(PhanSo);
  PhanSo tinhTich(PhanSo);
  void rutGonPhanSo();
};

int main() {
  PhanSo a, b;
  cout << "\nNhap phan so a";
  a.nhapPhanSo();

  cout << "\nNhap phan so b";
  b.nhapPhanSo();

  cout << "\na + b = ";
  PhanSo tong = a.tinhTong(b);
  tong.xuatPhanSo();

  cout << "\na + b = ";
  tong = a.tinhTong(b);
  tong.rutGonPhanSo();
  tong.xuatPhanSo();

  system("pause");
  return 0;
}

void PhanSo::nhapPhanSo() {
  cout << "\nNhap tu so: ";
  cin >> tuSo;

  do {
    cout << "Nhap mau so: ";
    cin >> mauSo;
    if (mauSo == 0)
      cout << "\nMau so khong hop le. Xin kiem tra lai" << endl;
  } while (mauSo == 0);
}

void PhanSo::xuatPhanSo() {
  cout << tuSo << "/" << mauSo;
}

PhanSo PhanSo::tinhTong(PhanSo x) {
  PhanSo tong;
  tong.tuSo = tuSo * x.mauSo + mauSo * x.tuSo;
  tong.mauSo = mauSo * x.mauSo;
  return tong;
}

// PhanSo PhanSo::tinhHieu(PhanSo x) {
  
// }

// PhanSo PhanSo::tinhTich(PhanSo x) {
  
// }

// PhanSo PhanSo::tinhThuong(PhanSo x) {
  
// }

int timUCLN(int a, int b) {
  if (a < 0)
    a *= -1;
  if (b < 0)
    b *= -1;

  while (a != b) {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}

void PhanSo::rutGonPhanSo() {
  int ucln = timUCLN(tuSo, mauSo);
  tuSo /= ucln;
  mauSo /= ucln;
}