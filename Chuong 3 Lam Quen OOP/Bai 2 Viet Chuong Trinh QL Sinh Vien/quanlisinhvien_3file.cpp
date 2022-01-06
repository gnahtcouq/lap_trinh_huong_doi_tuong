#include <iostream>
#include <string>
using namespace std;

// Ngay.h
class Ngay {
private:
  int ngay, thang, nam;
public:
  void nhap();
  void xuat();
};

// SinhVien.h
class SinhVien {
private:
  string ten;
  float diemToan, diemVan;
  Ngay ngaySinh;
public:
  void nhap();
  void xuat();
  float tinhDiemTrungBinh();
};


int main() {
  SinhVien sv1;
  sv1.nhap();
  sv1.xuat();
  float dtb = sv1.tinhDiemTrungBinh();
  cout << "\nDiem trung binh = " << dtb;

  system("pause");
  return 0;
}

// SinhVien.cpp
void SinhVien::nhap() {
  fflush(stdin);
  cout << "Nhap ten: ";
  getline(cin, ten);
  cout << "Nhap diem toan: ";
  cin >> diemToan;
  cout << "Nhap diem van: ";
  cin >> diemVan;
  cout << "Ngay sinh: ";
  ngaySinh.nhap();
}

void SinhVien::xuat() {
  cout << "\nTen: " << ten;
  cout << "\nDiem toan: " << diemToan;
  cout << "\nDiem van: " << diemVan;
  cout << "\nSinh ngay: ";
  ngaySinh.xuat();
}

float SinhVien::tinhDiemTrungBinh() {
  return (diemToan + diemVan) / 2;
}


// Ngay.cpp
void Ngay::nhap() {
  cout << "\n\tNhap ngay: ";
  cin >> ngay;
  cout << "\tNhap thang: ";
  cin >> thang;
  cout << "\tNhap nam: ";
  cin >> nam;
}

void Ngay::xuat() {
  cout << "Ngay " << ngay << " thang " << thang << " nam " << nam;
}