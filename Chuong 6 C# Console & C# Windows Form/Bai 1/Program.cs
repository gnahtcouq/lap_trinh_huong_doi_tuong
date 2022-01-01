using System.Collections;
using System;

namespace Bai_1 {
  class HocSinh {
    // Khai bao thuoc tinh
    private string maSo, hoTen;
    private double diemToan, diemLy, diemHoa; // Nen dung double de tranh bi bat ep kieu lai
    public void nhap() {
      Console.Write("\nNhap vao ma so: ");
      maSo = Console.ReadLine();
      // this.maSo = Console.ReadLine();

      Console.Write("Nhap vao ho ten: ");
      hoTen = Console.ReadLine();
      // this.hoTen = Console.ReadLine();


      while (true) {
        try {
          Console.Write("Nhap diem toan: ");
          diemToan = double.Parse(Console.ReadLine());

          // Kiem tra dieu kien diem nam trong doan tu 0->10
          if (diemToan < 0 || diemToan > 10)
            Console.Write("\nDiem toan phai nam trong doan 0->10. Xin kiem tra lai\n");
          else
            break; // Hop le thi thoat khoi vong lap vo tan
        } catch {
          Console.Write("\nKieu du lieu khong hop le. Xin kiem tra lai\n");
        }
      }

      while (true) {
        try {
          Console.Write("Nhap diem ly: ");
          diemLy = double.Parse(Console.ReadLine());

          // Kiem tra dieu kien diem nam trong doan tu 0->10
          if (diemLy < 0 || diemLy > 10)
            Console.Write("\nDiem ly phai nam trong doan 0->10. Xin kiem tra lai\n");
          else
            break; // Hop le thi thoat khoi vong lap vo tan
        } catch {
          Console.Write("\nKieu du lieu khong hop le. Xin kiem tra lai\n");
        }
      }

      while (true) {
        try {
          Console.Write("Nhap diem hoa: ");
          diemHoa = double.Parse(Console.ReadLine());

          // Kiem tra dieu kien diem nam trong doan tu 0->10
          if (diemHoa < 0 || diemHoa > 10)
            Console.Write("\nDiem hoa phai nam trong doan 0->10. Xin kiem tra lai\n");
          else
            break; // Hop le thi thoat khoi vong lap vo tan
        } catch {
          Console.Write("\nKieu du lieu khong hop le. Xin kiem tra lai\n");
        }
      }
    }

    public void xuat() {
      Console.Write("\nMa so: {0}", this.maSo);
      Console.Write("\nHo ten: " + this.hoTen);
      Console.Write("\nDiem toan: {0}", this.diemToan);
      Console.Write("\nDiem ly: {0}", this.diemLy);
      Console.Write("\nDiem hoa: {0}", this.diemHoa);
    }

    public double tinhDiemTrungBinh() {
      return (diemToan + diemLy + diemHoa) / 3;
    }

  }
  class Program {
    static void Main(string[] args) {
      // System.Console.Write("Hello world");
      // System.Console.ReadKey();
      // Console.WriteLine("Hello World!");


      // int x = -5;
      // Math.Abs(x);

      // ArrayList arr = new ArrayList();
      // arr.Add("thang");
      // arr.Add("dep");
      // arr.Add("trai");
      // arr.Add(29);
      // arr.Add(10);

      // arr[0] += "ahihi";
      // // arr[3] += "ahihi";

      // int size = arr.Count;

      // for (int i = 0; i < size; i++) {
      //   Console.Write("{0}\n", arr[i]);
      // }

      HocSinh hs1 = new HocSinh();
      hs1.nhap();
      hs1.xuat();
      double dtb = hs1.tinhDiemTrungBinh();
      Console.Write("\nDiem trung binh = " + dtb);

      // Console.ReadKey();
    }
  }
}