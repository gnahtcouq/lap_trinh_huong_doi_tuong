#include <iostream>
#include <string>
using namespace std;


bool kiemTraLaSoThuc(string chuoi) {
  // Kiem tra xem chuoi co phai so thuc ?
  int length = chuoi.length();
  int dem = 0;
  for (int i = 0; i < length; i++) {
    if ((chuoi[i] < '0' || chuoi[i] > '9') && chuoi[i] != '.')
      return false;
    if (chuoi[i] == '.') {
      dem++;
      if (dem == 2)
        return false;
    }
  }
  return true;
}


// HocSinh.h

// thuoc tinh -> private
// phuong thuc -> public
class HocSinh {
private:
  string ten;
  float diemToan, diemVan;
public:
  void nhap();
  void xuat();
  float tinhDiemTrungBinh();
};

int main() {
  HocSinh hs1;
  hs1.nhap();
  hs1.xuat();

  system("pause");
  return 0;
}

// HocSinh.cpp

// <Kieu du lieu> <Ten lop>::<Ten phuong thuc>

void HocSinh::nhap() {
  fflush(stdin);
  cout << "\nNhap ten: ";
  getline(cin, ten);
  // do {
  //   cout << "Nhap diem toan: ";
  //   cin >> diemToan;
  //   if (diemToan < 0 || diemToan > 10)
  //     cout << "Nhap trong doan [0 -> 10]. Hay nhap lai";
  // } while (diemToan < 0 || diemToan > 10);

  string toan;
quaylai:
  fflush(stdin);
  cout << "Nhap diem toan: ";
  getline(cin, toan);
  
  // Kiem tra xem chuoi co phai so thuc ?
  bool check = kiemTraLaSoThuc(toan);
  if (check == false) {
    cout << "\nKieu du lieu khong hop le. Xin kiem tra lai" << endl;
    goto quaylai;
  }
  else {
    diemToan = atof((char *)toan.c_str());
    if (diemToan < 0 || diemToan > 10) {
      cout << "\nDiem toan khong hop le. Xin kiem tra lai" << endl;
      goto quaylai;
    }
  }


  do {
    cout << "Nhap diem van: ";
    cin >> diemVan;
    if (diemVan < 0 || diemVan > 10)
      cout << "Nhap trong doan [0 -> 10]. Hay nhap lai";
  } while (diemVan < 0 || diemVan > 10);
}

void HocSinh::xuat() {
  cout << "\nTen: " << ten;
  cout << "\nDiem toan: " << diemToan;
  cout << "\nDiem van: " << diemVan;
  cout << "\nDiem trung binh: " << tinhDiemTrungBinh();
  
}

float HocSinh::tinhDiemTrungBinh() {
  return (diemToan + diemVan) / 2;
}