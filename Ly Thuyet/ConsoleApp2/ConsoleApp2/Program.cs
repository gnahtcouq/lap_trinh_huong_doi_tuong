#pragma warning disable CS8604 // Possible null reference argument.

using ConsoleApp2;

class Program {
    public int tinhTongThanhTienHangHoaCu(List<CHangHoa> ds) {
        int sum = 0;
        foreach (CHangHoa h in ds)
            if (h is CHangHoaCu)
                sum = h.tinhThanhTien();
        return sum;
    }
    public List<CHangHoaCu> layDSHangHoaCu(List<CHangHoa> ds) {

    }
    static void Main(string[] args) {

    }
}