#include <iostream>
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


int main() {

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

// Ham huy
Ngay::~Ngay(void) {

}