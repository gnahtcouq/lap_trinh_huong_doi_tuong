using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
#pragma warning disable CS8601 // Possible null reference assignment.

namespace ConsoleApp1 {
    abstract class CNhanVien {
        private string hoTen;
        private DateTime ngaySinh;
        private string diaChi;
        public string HoTen {
            get { return hoTen; }
            set { hoTen = value; }
        }
        public DateTime NgaySinh {
            get { return ngaySinh; }
            set { ngaySinh = value; }
        }
        public string DiaChi {
            get { return diaChi; }
            set { diaChi = value; }
        }
        public CNhanVien() {
            hoTen = "";
            ngaySinh = DateTime.Now;
            diaChi = "";
        }
        public CNhanVien(string hoten, DateTime ngaysinh, string diachi) {
            hoTen = hoten;
            ngaySinh = ngaysinh;
            diaChi = diachi;
        }
        public virtual void nhap() {
            Console.WriteLine("Nhap ho ten: ");
            hoTen = Console.ReadLine();
            Console.WriteLine("Nhap ngay sinh: ");
            ngaySinh = Convert.ToDateTime(Console.ReadLine());
            Console.WriteLine("Nhap dia chi: ");
            diaChi = Console.ReadLine();
        }
        public virtual void xuat() {
            Console.WriteLine("Ho ten: " + hoTen);
            Console.WriteLine("Ngay sinh: " + ngaySinh.ToShortDateString());
            Console.WriteLine("Dia chi: " + diaChi);
        }
        public abstract double tinhLuong();
    }
}