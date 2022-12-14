using ConsoleApp1;
#pragma warning disable CS8604 // Possible null reference argument.

class Program {
    static void Main(string[] args) {
        //List<CNVVanPhong> lstNVVP = new List<CNVVanPhong>();
        //List<CNVTapDich> lstNVTD = new List<CNVTapDich>();
        //List<CNVKiThuat> lstNVKT = new List<CNVKiThuat>();
        //char c;
        //Console.WriteLine("-------------------------------");
        //Console.WriteLine("\nNhap danh sach nhan vien van phong");
        //do {
        //    Console.WriteLine("-------------------------------");
        //    CNVVanPhong nv = new CNVVanPhong();
        //    nv.nhap();
        //    lstNVVP.Add(nv);
        //    Console.WriteLine("Ban co muon nhap tiep hay khong ? (y/n): ");
        //    c = Convert.ToChar(Console.ReadLine());
        //} while (c != 'N' && c != 'n');

        //Console.WriteLine("-------------------------------");
        //Console.WriteLine("\nNhap danh sach nhan vien tap dich");
        //do {
        //    Console.WriteLine("-------------------------------");
        //    CNVTapDich nv = new CNVTapDich();
        //    nv.nhap();
        //    lstNVTD.Add(nv);
        //    Console.WriteLine("Ban co muon nhap tiep hay khong ? (y/n): ");
        //    c = Convert.ToChar(Console.ReadLine());
        //} while (c != 'N' && c != 'n');

        //Console.WriteLine("-------------------------------");
        //Console.WriteLine("\nNhap danh sach nhan vien ki thuat");
        //do {
        //    Console.WriteLine("-------------------------------");
        //    CNVKiThuat nv = new CNVKiThuat();
        //    nv.nhap();
        //    lstNVKT.Add(nv);
        //    Console.WriteLine("Ban co muon nhap tiep hay khong ? (y/n): ");
        //    c = Convert.ToChar(Console.ReadLine());
        //} while (c != 'N' && c != 'n');

        //double tongLuong = 0;
        //foreach (CNVVanPhong nv in lstNVVP) {
        //    tongLuong += nv.tinhLuong();
        //}
        //foreach (CNVTapDich nv in lstNVTD) {
        //    tongLuong += nv.tinhLuong();
        //}
        //foreach (CNVKiThuat nv in lstNVKT) {
        //    tongLuong += nv.tinhLuong();
        //}
        //Console.WriteLine("Tong luong cua tat ca nhan vien: " + tongLuong);

        List<CNhanVien> lstDSNV = new List<CNhanVien>();
        int choose;
        bool exit = false;
        do {
            Console.Clear();
            Console.WriteLine("---------MENU---------");
            Console.WriteLine("1. Nhap nhan vien van phong");
            Console.WriteLine("2. Nhap nhan vien tap dich");
            Console.WriteLine("3. Nhap nhan vien ki thuat");
            Console.WriteLine("0. Thoat");
            Console.Write("-> Nhap lua chon: ");
            choose = Convert.ToInt32(Console.ReadLine());
            switch (choose) {
                case 1: {
                        //nhapNVVP(ref lstDSNV);
                        break;
                    }
                case 2: {
                        break;
                    }
                case 3: {
                        break;
                    }
                case 0: {
                        exit = true;
                        break;
                    }
                default:
                    Console.WriteLine("Lua chon khong hop le");
                    Console.ReadLine();
                    break;
            }
        } while (!exit);
    }
    //public static void nhapNVVP(ref List<CNhanVien> dsnv) {
    //    int choose;
    //    do {
    //        //List<CNVVanPhong> lstNVVP = new List<CNVVanPhong>();
    //    }
    //}

    //public static double tinhLuongDSNV(ref List<CNhanVien> dsnv) {
    //    double sum = 0;
    //    foreach (CNhanVien nv in dsnv)
    //        sum += ;
    //    return sum;
    //}
}
