using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1 {
    class CNVTapDich : CNhanVien {
        private int soNgayCong;
        public int SoNgayCong { get => soNgayCong; set => soNgayCong = value; }
        public CNVTapDich(string hoTen, DateTime ngaySinh, string diaChi, int soNgayCong) : base(hoTen, ngaySinh, diaChi) {
            this.soNgayCong = soNgayCong;
        }
        public CNVTapDich() : base() {
            soNgayCong = 0;
        }
        public override double tinhLuong() {
            return soNgayCong * 50000;
        }
        public override void nhap() {
            base.nhap();
            Console.WriteLine("Nhap so ngay cong: ");
            soNgayCong = Convert.ToInt32(Console.ReadLine());
        }
        public override void xuat() {
            base.xuat();
            Console.WriteLine("So ngay cong: " + soNgayCong);
        }
    }
}
