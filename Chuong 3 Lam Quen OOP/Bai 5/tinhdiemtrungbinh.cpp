#include <iostream>
#include <string>
using namespace std;

class HocSinh {
private:
  string ten;
  float diemToan;
  float diemVan;
public:
  void nhapThongTin();
  void xuatThongTin();
  float tinhDiemTrungBinh();
};

int main() {
  HocSinh hs1;
  hs1.nhapThongTin();
  hs1.xuatThongTin();

  system("pause");
  return 0;
}

void HocSinh::nhapThongTin() {
  cout << "\nNhap ten: ";
  getline(cin, ten);
  cout << "Nhap diem toan: ";
  cin >> diemToan;
  cout << "Nhap diem van: ";
  cin >> diemVan;
}

void HocSinh::xuatThongTin() {
  cout << "\nTen: " << ten;
  cout << "\nDiem toan: " << diemToan;
  cout << "\nDiem van: " << diemVan;
  cout << "\nDiem trung binh = " << tinhDiemTrungBinh();
}

float HocSinh::tinhDiemTrungBinh() {
  return (diemToan + diemVan) / 2;
}