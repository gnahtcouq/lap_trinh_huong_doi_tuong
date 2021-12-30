#include <iostream>
#include <string>
using namespace std;

class Ngay {
private:
  int ngay, thang, nam;
public:
  void nhapNgay();
  void xuatNgay();
};

class HocSinh {
private:
  string maSo, hoTen;
  Ngay ngaySinh;
public:
  void nhapHocSinh();
  void xuatHocSinh();
};


int main() {
  HocSinh hs;
  hs.nhapHocSinh();
  hs.xuatHocSinh();

  system("pause");
  return 0;
}

void Ngay::nhapNgay() {
  cout << "\nNhap vao ngay: ";
  cin >> ngay;
  cout << "Nhap vao thang: ";
  cin >> thang;
  cout << "Nhap vao nam: ";
  cin >> nam;
}

void Ngay::xuatNgay() {
  cout << "\nNgay " << ngay << " thang " << thang << " nam " << nam;
}

void HocSinh::nhapHocSinh() {
  fflush(stdin);
  cout << "\nNhap ma so: ";
  getline(cin, maSo);
  fflush(stdin);
  cout << "Nhap ho ten: ";
  getline(cin, hoTen);
  cout << "Nhap ngay sinh";
  ngaySinh.nhapNgay();
}

void HocSinh::xuatHocSinh() {
  cout << "\nMa so: " << maSo;
  cout << "\nHo ten: " << hoTen;
  cout << "\nNgay sinh: ";
  ngaySinh.xuatNgay();
}

