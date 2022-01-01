using System;

namespace Cach_chia_file {
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
      hs1.NgaySinh.Day = 20;
      hs1.xuat();
      double dtb = hs1.tinhDiemTrungBinh();
      Console.Write("\nDiem trung binh = " + dtb);


      // List<HocSinh> arr = new List<HocSinh>();

      // int n = 2;
      // for (int i = 1; i <= n; i++) {
      //   HocSinh hs = new HocSinh();
      //   hs.nhap();
      //   arr.Add(hs);
      // }

      // Console.ReadKey();
    }
  }
}