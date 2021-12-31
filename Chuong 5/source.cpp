#include <iostream>
#include <string>
using namespace std;

class Ngay {
private:
  int ngay, thang, nam;
public:
  Ngay(void); // Khoi tao mac dinh
  Ngay(int, int, int); // Khoi tam tham so: nam-thang-ngay
  Ngay(const Ngay &); // Khoi tao sao chep
  ~Ngay(void); // Huy
  void nhap();
  void xuat();
};

class SinhVien {
private:
  string MSSV, hoTen;
  Ngay ngaySinh;
  float DLT, DTH;
public:
  SinhVien(void); // Khoi tao mac dinh
  SinhVien(string); // Khoi tao 1 tham so la MSSV
  SinhVien(string, string); // Khoi tao 2 tham so la MSSV va Ten
  SinhVien(string, string, float, float); // Khoi tao 4 tham so la MSSV va Ten va DLT va DTH
  SinhVien(string, string, Ngay); // Khoi tao 3 tham so la MSSV va Ten va Ngay sinh
  SinhVien(string, string, Ngay, float, float); // Khoi tao 5 tham so la MSSV va Ten va Ngay sinh va DLT va DTH
  void xuat();
  ~SinhVien(void); // Huy
};


int main() {
  cout << "\n\n-> sinh vien a";
  SinhVien a;
  a.xuat();

  cout << "\n\n-> sinh vien b";
  SinhVien b("1264132");
  b.xuat();

  cout << "\n\n-> sinh vien c";
  SinhVien c("DH52007101", "Tran Van Quoc Thang");
  c.xuat();

  cout << "\n\n-> sinh vien d";
  SinhVien d("DH52007101", "Tran Van Quoc Thang", 9, 8);
  d.xuat();

  Ngay ngaySinh(2002, 10, 29);
  cout << "\n\n-> sinh vien e";
  SinhVien e("DH52007101", "Tran Van Quoc Thang", ngaySinh);
  e.xuat();

  cout << "\n\n-> sinh vien f";
  SinhVien f("DH52007101", "Tran Van Quoc Thang", ngaySinh, 7, 8);
  f.xuat();

  system("pause");
  return 0;
}

// Khoi tao mac dinh
Ngay::Ngay(void) {
  ngay = 1;
  thang = 1;
  nam = 1990;
}

// Khoi tao tham so: nam-thang-ngay
Ngay::Ngay(int year, int month, int day) {
  nam = year;
  thang = month;
  ngay = day;
}

// Khoi tao sao chep
Ngay::Ngay(const Ngay &x) {
  ngay = x.ngay;
  thang = x.thang;
  nam = x.nam;
}

void Ngay::xuat() {
  cout << "\nNgay " << ngay << " thang " << thang << " nam " << nam;
}

// Ham huy
Ngay::~Ngay(void) {

}

void SinhVien::xuat() {
  cout << "\nMSSV: " << MSSV;
  cout << "\nHo ten: " << hoTen;
  cout << "\nNgay sinh: ";
  ngaySinh.xuat();
  cout << "\nDLT: " << DLT;
  cout << "\nDTH: " << DTH;
}

SinhVien::SinhVien(void) {
  MSSV = "";
  hoTen = "";
  DLT = 10;
  DTH = 10;
}

SinhVien::SinhVien(string mssv) {
  MSSV = mssv;
  hoTen = "";
  DLT = 10;
  DTH = 10;
}

SinhVien::SinhVien(string mssv, string ten) {
  MSSV = mssv;
  hoTen = ten;
  DLT = 10;
  DTH = 10;
}

SinhVien::SinhVien(string mssv, string ten, float dlt, float dth) {
  MSSV = mssv;
  hoTen = ten;
  DLT = dlt;
  DTH = dth;
}

SinhVien::SinhVien(string mssv, string ten, Ngay ngaysinh) {
  MSSV = mssv;
  hoTen = ten;
  ngaySinh = ngaysinh;
  DLT = 10;
  DTH = 10;
}

SinhVien::SinhVien(string mssv, string ten, Ngay ngaysinh, float dlt, float dth) {
  MSSV = mssv;
  hoTen = ten;
  ngaySinh = ngaysinh;
  DLT = dlt;
  DTH = dth;
}


SinhVien::~SinhVien(void) {

}

