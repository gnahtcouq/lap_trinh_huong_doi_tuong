#include <iostream>
using namespace std;

class PhanSo {
private:
  int tuSo, mauSo;
public:
  PhanSo(void); // Ham khoi tao mac dinh
  PhanSo(int, int); // 2 tham so
  PhanSo(int); // 1 tham so
  PhanSo(const PhanSo &); // Ham khoi tao sao chep
  ~PhanSo(void); // Ham huy
  // void nhap();
  void xuat();
  PhanSo cong(PhanSo);
};

int main() {
  PhanSo a;
  a.xuat();
  PhanSo b(1, 2);
  b.xuat();
  PhanSo c(3, 4);
  c.xuat();
  PhanSo d(3);
  d.xuat();
  PhanSo e(-5);
  e.xuat();
  PhanSo f(c);
  f.xuat();
  a = b.cong(c);
  a.xuat();


  system("pause");
  return 0;
}

// Ham khoi tao mac dinh
PhanSo::PhanSo(void) {
  tuSo = 0;
  mauSo = 1;
}

// Ham huy
PhanSo::~PhanSo(void) {
  // Rong do khong co con tro
}

// 2 tham so
PhanSo::PhanSo(int ts, int ms) {
  tuSo = ts;
  mauSo = ms;
}

// 1 tham so
PhanSo::PhanSo(int ts) {
  tuSo = ts;
  mauSo = 1; // gan mac dinh
}

// Ham khoi tao sao chep
PhanSo::PhanSo(const PhanSo &ps) {
  tuSo = ps.tuSo;
  mauSo = ps.mauSo;
}

void PhanSo::xuat() {
  cout << tuSo << "/" << mauSo << endl;
}

PhanSo PhanSo::cong(PhanSo ps) {
  PhanSo tong;
  tong.tuSo = tuSo * ps.mauSo + mauSo * ps.tuSo;
  tong.mauSo = mauSo * ps.mauSo;
  return tong;
}