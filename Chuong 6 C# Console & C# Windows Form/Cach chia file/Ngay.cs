using System;
namespace Cach_chia_file {
  class Ngay {
    private int day, month, year;

    // Khoi tao mac dinh
    public Ngay() {
      day = month = year = 1;
    }

    // Khoi tam tham so
    public Ngay(int ngay, int thang, int nam) {
      day = ngay;
      month = thang;
      year = nam;
    }

    // Khoi tao sao chep
    public Ngay(Ngay x) {
      day = x.day;
      month = x.month;
      year = x.year;
    }

    public int Day {
      get { return day; }
      set {
        day = value;
      }
    }

    public void nhap() {
      Console.Write("\nNhap ngay: ");
      day = int.Parse(Console.ReadLine());

      Console.Write("Nhap thang: ");
      month = int.Parse(Console.ReadLine());

      Console.Write("Nhap nam: ");
      year = int.Parse(Console.ReadLine());
    }

    public void xuat() {
      Console.Write("{0}/{1}/{2}", day, month, year);
    }
  }
}