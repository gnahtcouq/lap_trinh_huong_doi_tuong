using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1 {
    class CNVVanPhong : CNhanVien {
        private double heSoLuong;
        private double luongCoBan;
        public double HeSoLuong { get => heSoLuong; set => heSoLuong = value; }
        public double LuongCoBan { get => luongCoBan; set => luongCoBan = value; }

        public CNVVanPhong() : base() {
            heSoLuong = 0;
            luongCoBan = 0;
        }
        public CNVVanPhong(string hoTen, DateTime ngaySinh, string diaChi, double heSoLuong, double luongCoBan) : base(hoTen, ngaySinh, diaChi) {
            this.heSoLuong = heSoLuong;
            this.luongCoBan = luongCoBan;
        }
        public override double tinhLuong() {
            return heSoLuong * luongCoBan;
        }
        public override void nhap() {
            base.nhap();
            Console.WriteLine("Nhap he so luong: ");
            heSoLuong = Convert.ToInt64(Console.ReadLine());
            Console.WriteLine("Nhap luong co ban: ");
            luongCoBan = Convert.ToInt64(Console.ReadLine());
        }
        public override void xuat() {
            base.xuat();
            Console.WriteLine("He so luong: " + heSoLuong);
            Console.WriteLine("Luong co ban: " + luongCoBan);
        }
    }
}
