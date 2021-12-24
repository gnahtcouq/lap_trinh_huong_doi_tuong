#include <iostream>
#include <string>
using namespace std;

class Ngay {
private:
  int ngay, thang, nam;
public:
  void nhap() {
    cout << "\nNhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
  }

  void xuat() {
    cout << "\nNgay " << ngay << " thang " << thang << " nam " << nam;
  }
};

class HocSinh {
private:
  string ten;
  float diemToan, diemVan;
  Ngay ngaySinh;
public:
  void nhap() {
    fflush(stdin);
    cout << "\nNhap ten: ";
    getline(cin, this->ten);

    cout << "Nhap diem toan: ";
    cin >> this->diemToan;

    cout << "Nhap diem van: ";
    cin >> this->diemVan;

    cout << "Nhap ngay sinh";
    ngaySinh.nhap();
  }

  void xuat() {
    cout << "\nTen: " << ten;
    cout << "\nDiem toan: " << diemToan;
    cout << "\nDiem van: " << diemVan;
    cout << "\nSinh ngay: ";
    ngaySinh.xuat();
  }

  float tinhTrungBinh() {
    return (diemToan + diemVan) / 2;
  }

};

int main() {
  HocSinh hs1;
  hs1.nhap();
  hs1.xuat();
  float dtb = hs1.tinhTrungBinh();
  cout << "\nDiem trung binh = " << dtb;


  system("pause");
  return 0;
}