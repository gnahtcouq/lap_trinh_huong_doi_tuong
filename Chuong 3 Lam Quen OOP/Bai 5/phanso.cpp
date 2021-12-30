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

PhanSo PhanSo::tinhHieu(PhanSo x) {
  
}

PhanSo PhanSo::tinhTich(PhanSo x) {
  
}

PhanSo PhanSo::tinhThuong(PhanSo x) {
  
}

void PhanSo::rutGonPhanSo() {

}

int timUCLN(int a, int b) {

}