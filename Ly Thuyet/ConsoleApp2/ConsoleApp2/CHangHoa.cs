using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2 {
    public class CHangHoa {
        protected string m_mahh;
        protected string m_tenhh;

        public CHangHoa() {
            m_mahh = "";
            m_tenhh = "";
        }
        public CHangHoa(string mahh, string tenhh) {
            m_mahh = mahh;
            m_tenhh = tenhh;
        }

        public string MaHH { get => m_mahh; set => m_mahh = value; }
        public string TenHH { get => m_tenhh; set => m_tenhh = value; }

        public virtual int tinhThanhTien() {
            return 0;
        }
    }
}
