#include <iostream>
#include <math.h>
using namespace std;

class Diem {
private:
  int x, y;
public:
  Diem(void); // Ham khoi tao mac dinh
  Diem(int, int); // Ham khoi tao tham so
  Diem(const Diem &); // Ham khoi tao sao chep
  ~Diem(void); // Ham huy
  void nhap();
  void xuat();

  int getter_x();
  int getter_y();
  void setter_x(int);
  void setter_y(int);

  float tinhKhoangCach(Diem);
};

int main() {
  Diem d1(1, 2);
  Diem d2(5, 8);
  Diem d3; // (0, 0)
  Diem d4(d1); // (1, 2)

  cout << "\nd1";
  d1.xuat();
  cout << "\nd2";
  d2.xuat();
  cout << "\nd3";
  d3.xuat();
  cout << "\nd4";
  d4.xuat();

  float khoangcach = d1.tinhKhoangCach(d2);
  cout << "\nKhoang cach = " << khoangcach;

  system("pause");
  return 0;
}

// Ham khoi tao mac dinh
Diem::Diem(void) {
  x = y = 0;
}

// Ham huy
Diem::~Diem(void) {
  // Rong do khong co con tro
}

// Ham khoi tao tham so
Diem::Diem(int a, int b) {
  x = a;
  y = b;
}

// Ham khoi tao sao chep
Diem::Diem(const Diem &a) {
  x = a.x;
  y = a.y;
}

void Diem::nhap() {
  cout << "\nNhap hoanh do: ";
  cin >> x;
  cout << "Nhap tung do: ";
  cin >> y;
}

void Diem::xuat() {
  cout << "(" << x << ", " << y << ")";
}

int Diem::getter_x() {
  return x;
}

int Diem::getter_y() {
  return y;
}

void Diem::setter_x(int hd) {
  x = hd;
}

void Diem::setter_y(int td) {
  y = td;
}

float Diem::tinhKhoangCach(Diem d) {
  return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
}