using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace try_catch {
    internal class Class1 {
        static void Main(string[] args) {
            int x;
        thangdeptrai:
            try {
                Console.Write("\nNhap x = ");
                x = int.Parse(Console.ReadLine());
            } catch {
                Console.Write("\nKieu du lieu khong hop le. Xin nhap lai");
                goto thangdeptrai;
            }
            Console.Write("\nx = {0}", x);
            Console.ReadKey();
        }
    }
}
