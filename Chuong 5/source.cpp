#include <iostream>
#include <string>
using namespace std;

class Ngay {
private:
  int ngay, thang, nam;
public:
  Ngay(void); // Khoi tao mac dinh
  Ngay(int, int, int); // Khoi tam tham so: nam-thang-ngay
  Ngay(const Ngay&); // Khoi tao sao chep
  ~Ngay(void); // Huy
  void xuat();

  int getter_ngay();
  void setter_ngay(int);
  int getter_thang();
  void setter_thang(int);
  int getter_nam();
  void setter_nam(int);
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
  SinhVien(string, string, int, int, int, float, float); // Khoi tao 7 tham so la MSSV va Ten va Ngay va Thang va Nam va DLT va DTH
  SinhVien(const SinhVien&); // sao chep
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

  cout << "\n\n-> sinh vien g";
  SinhVien g("DH52007101", "Tran Van Quoc Thang", 2002, 10, 4, 7, 8);
  g.xuat();

  cout << "\n\n-> sinh vien h";
  SinhVien h(d);
  h.xuat();


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
Ngay::Ngay(const Ngay& x) {
  ngay = x.ngay;
  thang = x.thang;
  nam = x.nam;
}

void Ngay::xuat() {
  cout << "\nNgay " << ngay << " thang " << thang << " nam " << nam;
}

int Ngay::getter_ngay() {
  return ngay;
}

void Ngay::setter_ngay(int day) {
  ngay = day;
}


int Ngay::getter_thang() {
  return thang;
}

void Ngay::setter_thang(int month) {
  thang = month;
}


int Ngay::getter_nam() {
  return nam;
}

void Ngay::setter_nam(int year) {
  nam = year;
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

SinhVien::SinhVien(string mssv, string ten, int year, int month, int day, float dlt, float dth) {
  MSSV = mssv;
  hoTen = ten;
  // Ngay tam(year, month, day);
  // ngaySinh = tam;

  ngaySinh.setter_nam(year);
  ngaySinh.setter_thang(month);
  ngaySinh.setter_ngay(day);

  DLT = dlt;
  DTH = dth;
}

SinhVien::SinhVien(const SinhVien& sv) {
  MSSV = sv.MSSV;
  hoTen = sv.hoTen;
  ngaySinh = sv.ngaySinh;
  DLT = sv.DLT;
  DTH = sv.DTH;
}


SinhVien::~SinhVien(void) {

}

