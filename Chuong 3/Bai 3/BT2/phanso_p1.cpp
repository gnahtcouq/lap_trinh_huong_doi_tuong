#include <iostream>
using namespace std;

int timUCLN(int a, int b);

// PhanSo.h
class PhanSo {
private:
  int tuSo, mauSo;
public:
  void nhap();
  void xuat();
  float tinhKetQuaPhanSo();
  void rutGon();
};

int main() {
  PhanSo ps1;
  ps1.nhap();
  ps1.xuat();
  float result = ps1.tinhKetQuaPhanSo();
  if (result > 0)
    cout << "\nps1 > 0";
  else if (result < 0)
    cout << "\nps1 < 0";
  else
    cout << "\nps1 = 0";
  
  ps1.rutGon();
  cout << "\nPhan so sau khi rut gon la: ";
  ps1.xuat();
  
  
  system("pause");
  return 0;
}

// PhanSo.cpp
void PhanSo::nhap() {
  cout << "\nNhap tu so: ";
  cin >> tuSo;

  do {
    cout << "Nhap mau so: ";
    cin >> mauSo;
    if (mauSo == 0)
      cout << "\nMau so phai != 0. Xin kiem tra lai" << endl;
  } while (mauSo == 0);
}

void PhanSo::xuat() {
  if (mauSo < 0) {
    mauSo *= -1;
    tuSo *= -1;
  }
  cout << tuSo << "/" << mauSo;
}

float PhanSo::tinhKetQuaPhanSo() {
  return (float)tuSo / mauSo;
}

// Quy tac rut gon phan so
// -> tu va mau chia cho USCLN cua no

int timUCLN(int a, int b) {
  /*
  3 chia het cho 1, 3
  6 chia het cho 1, 2, 3, 6
  -> UCLN cua 3 & 6 la 3
  */
 
  // Quy chuan ve duong
  if (a < 0)
    a *= -1;
  if (b < 0)
    b *= -1;

  // Xu ly
  // int min = a < b ? a : b;
  // int max = a > b ? a : b;

  // // 1 so nguyen duong n se khong chia het cho cac so nam trong doan n / 2 + 1 --> n - 1
  // if (max % min == 0)
  //   return min;
  // for (int i = min / 2; i >= 1; i--)
  //   if (min % i == 0 && max % i == 0)
  //     return i;

  /* 
  a = 5
  b = 10

  b = b - a = 5



  a = 4
  b = 6
  b = b - a = 2

  a = a - b = 2
  b = 2
  */
  while (a != b) {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a; // hay b cung duoc vi luc nay a == b
}

void PhanSo::rutGon() {
  int ucln = timUCLN(tuSo, mauSo);
  tuSo /= ucln;
  mauSo /= ucln;
}