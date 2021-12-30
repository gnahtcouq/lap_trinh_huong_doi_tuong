#include <iostream>
#include <math.h>
using namespace std;

class Diem {
private:
  float hoanhDo, tungDo;
public:
  void nhap();
  void xuat();
  float tinhKhoangCach(Diem);
};

int main() {
  Diem d1, d2;
  d1.nhap();
  d1.xuat();
  d2.nhap();
  d2.xuat();

  float khoangcach = d1.tinhKhoangCach(d2);
  cout << "\nKhoang cach = " << khoangcach;

  system("pause");
  return 0;
}

void Diem::nhap() {
  cout << "\nNhap hoanh do = ";
  cin >> hoanhDo;
  cout << "Nhap tung do = ";
  cin >> tungDo;
}

void Diem::xuat() {
  cout << "(" << hoanhDo << ", " << tungDo << ")";
}

float Diem::tinhKhoangCach(Diem b) {
  return sqrt(pow(hoanhDo - b.hoanhDo, 2) + pow(tungDo - b.tungDo, 2));
}