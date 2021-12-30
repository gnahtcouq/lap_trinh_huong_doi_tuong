#include <iostream>
#include <string>
using namespace std;

class HocSinh {
private:
  string ten;
  float *diem;
public:
  void xuat() {
    cout << "\nTen: " << ten;
    cout << "\nDiem: " << *diem;
  }

  // Khoi tao mac dinh
  HocSinh() {
    ten = "Quoc Thang";
    diem = new float;
    *diem = 9.7;
    // cout << "ok" << endl;
  }

  // Khoi tao tham so
  HocSinh(string t, float d) {
    ten = t;
    diem = new float;
    *diem = d;
  }

  // Khoi tao sao chep
  HocSinh(const HocSinh &x) {
    ten = x.ten;
    diem = new float; // Tao 1 vung nho khac
    *diem = *x.diem; // Copy du lieu qua
  }

  // Ham huy
  ~HocSinh() {
    // Neu trong lop ma khong co con tro thi ham huy khoi can cai dat
    // Neu trong lop ma co con tro thi ben trong ham huy phai giai phong con tro


    // cout << "ham huy chay" << endl;
    delete diem;
  }

  void thayDoi() {
    (*diem)--;
  }

  void inDiaChi() {
    cout << "\n\tDia chi: " << &diem;
    cout << "\n\tMien gia tri " << diem;
  }

  string getter_ten() {
    return ten;
  }

  void setter_ten(string t) {
    ten = t;
  }
};

int main() {
  HocSinh hs1("Thao", 7.7);
  HocSinh hs2(hs1); // Khoi tao sao chep
  
  cout << "\n hs1";
  hs1.xuat();

  cout << "\n hs2";
  hs2.xuat();

  cout << "\n\n-> Thay doi hs1";
  hs1.thayDoi();
  cout << "\n\n hs1 sau khi thay doi";
  hs1.xuat();

  cout << "\n\n hs2";
  hs2.xuat();

  cout << "\n-------------";
  cout << "\n\n -> hs1: ";
  hs1.inDiaChi();

  cout << "\n\n -> hs2: ";
  hs2.inDiaChi();

  // cout << "\n\n-> Mien gia tri cua 2 con tro giong nhau";


  /* LUU Y: Khi hs1 goi toi phuong thuc thayDoi lam giam di 1 diem cua hs1 thi tu nhien hs2 cung bi giam di 1 diem 

  Boi vi neu nhu ta khong khai bao ham dung sao chep thi trinh bien dich se ngam lam nhu sau

        HocSinh(const HocSinh &x) {
          ten = x.ten;
          diem = x.diem;
        }
  
  */
  cout << "\nTen hoc sinh hs1 = " << hs1.getter_ten();

  hs1.setter_ten("Doanh");
  cout << "\nTen hoc sinh hs1 = " << hs1.getter_ten();

  system("pause");
  return 0;
}