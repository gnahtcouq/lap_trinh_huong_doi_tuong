using System;

namespace Lam_quen_C_Sharp {
  class Program {
    static void Main(string[] args) {
      // int x;
      // do {
      //   Console.Write("\nNhap vao x = "); // <=> cout
      //   x = int.Parse(Console.ReadLine()); // <=> cin
      // } while (x < 0);

      // Console.Write("\nx = {0}", x); // Nen dung
      // Console.Write("\nx = " + x);

      // Double: La kieu du lieu cua C# Form
      // double: La kieu du lieu cua C# Console

      // for (int i = 1; i <= 10; i++) {
      //   Console.Write("{0}\n", i);
      // }

      // int i = 1;
      // while (i <= 10) {
      //   Console.Write("{0}\n", i);
      //   i++;
      // }

      // int []a = {1, 2, 3, 4, 5};
      // int n = 5;
      // // for (int i = 0; i < n; i++) {
      // //   Console.Write("{0}\n", a[i]);
      // // }

      // foreach(int item in a) { // Vong lap cho no lap
      //   Console.Write("{0}\n", item);
      // }

      // List<int> arr = new List<int>();
      // arr.Add(1);
      // arr.Add(2);
      // arr.Add(3);
      // arr.Add(4);
      // arr.Add(5);

      // int size = arr.Count();
      // for (int i = 0; i < size; i++) {
      //   Console.Write("{0}\n",arr[i]);
      // }

      // foreach(int item in arr) {
      //   Console.Write("{0}\n", item);
      // }



      // string ten = Console.Readline();

      int x;
    thangdeptrai:
      Console.Write("\nNhap vao x = "); // <=> cout
      try {
        x = int.Parse(Console.ReadLine()); // <=> cin
      } catch {
        Console.Write("\nKieu du lieu khong hop le. Xin kiem tra lai");
        goto thangdeptrai;
      }


      // Console.ReadKey(); // system("pause)
    }
  }
}
