using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
#pragma warning disable CS8603 // Possible null reference return.


namespace ConsoleApp2 {
    public class CDanhSachHangHoa {
        private List<CHangHoa> m_dshh;
        public CDanhSachHangHoa(List<CHangHoa> dshh) {
            m_dshh = dshh;
        }
        public List<CHangHoa> getDanhSachHangHoa() {
            return m_dshh;
        }
        public CHangHoa tim(string ma) {
            foreach (CHangHoa h in m_dshh)
                if (h.MaHH == ma)
                    return h;
            return null;
        }
        public bool them(CHangHoa h) {
            if (tim(h.MaHH) == null) {
                m_dshh.Add(h);
                return true;
            }
            return false;
        }
        public bool xoa(string ma) {
            CHangHoa h = tim(ma);
            if (h != null) {
                m_dshh.Remove(h);
                return true;
            }
            return false;
        }
        public bool sua(CHangHoa a) {
            CHangHoa h = tim(a.MaHH);
            if (h != null) {
                h.TenHH = a.TenHH;
                return true;
            }
            return false;
        }
    }
}
