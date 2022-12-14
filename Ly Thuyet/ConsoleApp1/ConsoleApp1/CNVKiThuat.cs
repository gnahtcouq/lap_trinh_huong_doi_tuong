using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1 {
    class CNVKiThuat : CNhanVien {
        private long tongSoSPSanXuatDuoc;

        public CNVKiThuat(string hoTen, DateTime ngaySinh, string diaChi, long tongSoSPSanXuatDuoc) : base(hoTen, ngaySinh, diaChi) {
            this.tongSoSPSanXuatDuoc = tongSoSPSanXuatDuoc;
        }

        public CNVKiThuat() : base() {
            tongSoSPSanXuatDuoc = 0;
        }

        public long TongSoSPSanXuatDuoc { get => tongSoSPSanXuatDuoc; set => tongSoSPSanXuatDuoc = value; }


        public override double tinhLuong() {
            return tongSoSPSanXuatDuoc * 100000;
        }

        public override void nhap() {
            base.nhap();
            Console.WriteLine("Nhap tong so san pham san xuat duoc: ");
            tongSoSPSanXuatDuoc = Convert.ToInt64(Console.ReadLine());
        }
        public override void xuat() {
            base.xuat();
            Console.WriteLine("Tong so san pham san xuat duoc: " + tongSoSPSanXuatDuoc);
        }
    }
}
