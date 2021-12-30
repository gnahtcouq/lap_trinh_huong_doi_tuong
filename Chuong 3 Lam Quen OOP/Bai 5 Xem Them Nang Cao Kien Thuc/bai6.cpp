#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Ngay {
private:
  int ngay, thang, nam;
public:
  void nhap();
  void xuat();
};

class SinhVien {
private:
  string maSo, hoTen, lop, CMND;
  Ngay ngaySinh;
  float diemThi;
public:
  void nhap();
  void xuat();
  float layDiemThi();
  string layHoTen();
};

void nhapDanhSachLop(SinhVien *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << "\n\tNhap thong tin sinh vien thu " << i + 1;
    arr[i].nhap();
  }
}

void xuatDanhSachLop(SinhVien *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << "\n\tThong tin sinh vien thu " << i + 1;
    arr[i].xuat();
  }
}

float timDiemThiCaoNhat(SinhVien *arr, int n) {
  int max = arr[0].layDiemThi();
  for (int i = 1; i < n; i++)
    if (arr[i].layDiemThi() > max)
      max = arr[i].layDiemThi();
  return max;
}

template <class T>
void hoanVi(T &a, T &b) {
  T tam = a;
  a = b;
  b = tam;
}

void sapXepTangDanTheoTen(vector<SinhVien> &arr) {
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i].layHoTen() > arr[j].layHoTen())
        // hoanVi<SinhVien>(arr[i], arr[j]);
        swap(arr[i], arr[j]);
    }
  }
}

int main() {
  // SinhVien sv;
  // sv.nhap();
  // sv.xuat();




  int n; // So luong sinh vien co trong lop

  do {
    cout << "\nNhap vao so luong sinh vien trong lop: ";
    cin >> n;
    if (n < 0)
      cout << "\nSo luong khong hop le. Xin kiem tra lai";
  } while (n < 0);

  // Cap phat dong
  SinhVien *arr = new SinhVien[n];

  nhapDanhSachLop(arr, n);
  xuatDanhSachLop(arr, n);

  vector<SinhVien> mang;
  // Dua tat ca cac sinh vien co diem cao nhat vao vector
  float max = timDiemThiCaoNhat(arr, n);
  for (int i = 0; i < n; i++) {
    if (arr[i].layDiemThi() == max)
      mang.push_back(arr[i]);
  }

  if (mang.size() == 1)
    mang[0].xuat();
  else {
    sapXepTangDanTheoTen(mang);
    // xuat ra
    cout << "\nDanh sach sinh vien co diem lon nhat da duoc sap xep tang dan theo bang chu cai";
    for (int i = 0; i < mang.size(); i++) {
      mang[i].xuat();
    }
  }

  // Giai phong
  delete[] arr;





  system("pause");
  return 0;
}

// Tra ve true neu la nam nhuan
bool kiemTraNamNhuan(int x) {
  if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
    return true;
  return false;
}

void Ngay::nhap() {
  do {
    cout << "\n\tNhap nam: ";
    cin >> nam;
    if (nam < 1940)
      cout << "\nNam khong hop le. Xin hay nhap lai" << endl;
  } while (nam < 1940);

  do {
    cout << "\tNhap thang: ";
    cin >> thang;
    if (thang < 1 || thang > 12)
      cout << "\nThang khong hop le. Xin hay nhap lai" << endl;
  } while (thang < 1 || thang > 12);


  bool kiemTraNgay;
  do {
    kiemTraNgay = true;
    cout << "\tNhap ngay: ";
    cin >> ngay;
    if (ngay < 1)
      kiemTraNgay = false;
    else {
      // Co toi da 30 ngay
      if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        if (ngay > 30)
          kiemTraNgay = false;
      }
      // Co 31 ngay
      else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        if (ngay > 31)
          kiemTraNgay = false;
      }
      // Thang 2 co the co 28 hoac 29 ngay
      else {
        if (kiemTraNamNhuan(nam)) {
          if (ngay > 29)
            kiemTraNgay = false;
        }
        else {
          if (ngay > 28)
            kiemTraNgay = false;
        }
      }
    }
    if (kiemTraNgay == false)
      cout << "\nNgay khong hop le. Xin hay nhap lai" << endl;
  } while (kiemTraNgay == false);
}

void Ngay::xuat() {
  cout << "Ngay " << ngay << " thang " << thang << " nam " << nam;
}




void SinhVien::nhap() {
  fflush(stdin);
  cout << "\nNhap MSSV: ";
  getline(cin, maSo);
  fflush(stdin);
  cout << "Nhap ho ten: ";
  getline(cin, hoTen);
  fflush(stdin);
  cout << "Nhap lop: ";
  getline(cin, lop);
  fflush(stdin);
  cout << "Nhap CMND: ";
  getline(cin, CMND);
  cout << "Nhap ngay sinh";
  ngaySinh.nhap();
  do {
    cout << "Nhap diem thi chuyen nganh: ";
    cin >> diemThi;
    if (diemThi < 0 || diemThi > 10)
      cout << "\nDiem thi khong hop le. Xin kiem tra lai" << endl;
  } while (diemThi < 0 || diemThi > 10);
}

void SinhVien::xuat() {
  cout << "\nMSSV: " << maSo;
  cout << "\nHo ten: " << hoTen;
  cout << "\nLop: " << lop;
  cout << "\nCMND: " << CMND;
  cout << "\nNgay sinh: ";
  ngaySinh.xuat();
}

float SinhVien::layDiemThi() {
  return diemThi;
}

string SinhVien::layHoTen() {
  return hoTen;
}