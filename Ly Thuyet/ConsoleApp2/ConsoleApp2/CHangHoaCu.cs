using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2 {
    public class CHangHoaCu : CHangHoa {
        private int m_gia;
        private int m_giagiam;
        private int m_soluong;
        public CHangHoaCu() : base() {
            m_gia = 0;
            m_giagiam = 0;
            m_soluong = 0;
        }
        public CHangHoaCu(string mahh, string tenhh, int gia, int giagiam, int soluong) : base(mahh, tenhh) {
            m_gia = gia;
            m_giagiam = giagiam;
            m_soluong = soluong;
        }

        public int Gia { get => m_gia; set => m_gia = value; }
        public int Giagiam { get => m_giagiam; set => m_giagiam = value; }
        public int Soluong { get => m_soluong; set => m_soluong = value; }
        public override int tinhThanhTien() {
            return (Gia - Giagiam) * Soluong;
        }
    }
}
