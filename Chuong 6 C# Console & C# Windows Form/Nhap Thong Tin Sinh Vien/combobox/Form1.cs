using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace combobox {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e) {
            //for (int i = 1950; i <= 2022; i++) {
            //    cmbNamSinh.Items.Add(i.ToString());
            //}
            //cmbNamSinh.SelectedIndex = 0;


            lsbMonHoc.Items.Add("Kỹ Thuật Lập Trình");
            lsbMonHoc.Items.Add("Cấu Trúc Dữ Liệu & Giải Thuật");
            lsbMonHoc.Items.Add("Lập Trình Hướng Đối Tượng");
            lsbMonHoc.Items.Add("Lập Trình Android");
            lsbMonHoc.Items.Add("Lập Trình IOS");

            lsvDanhSachHocSinh.Columns.Add("Họ Tên", 250);
            lsvDanhSachHocSinh.Columns.Add("MSSV", 200);
            lsvDanhSachHocSinh.Columns.Add("Khoa", 200);
            lsvDanhSachHocSinh.Columns.Add("Đăng Ký Môn Học", 1200);
        }

        private void btnXacNhan_Click(object sender, EventArgs e) {
            lblHoTen.Text = "Họ Tên: " + txtHoTen.Text;
            lblMaSo.Text = "Mã số sinh viên: " + txtMaSo.Text;
            lblKhoa.Text = "Khoa: " + txtKhoa.Text;
            lblKetQua.Text = "";
            int count = lsbMonHoc.Items.Count;

            for (int i = 0; i < count; i++) {
                if (lsbMonHoc.GetSelected(i))
                    lblKetQua.Text += "\n" + lsbMonHoc.Items[i].ToString() + ", ";
            }
        }

        private void btnLuuDS_Click(object sender, EventArgs e) {
            string[] arr = new string[4];
            ListViewItem item; // Add item vao List view
            arr[0] = txtHoTen.Text;
            arr[1] = txtMaSo.Text;
            arr[2] = txtKhoa.Text;
            arr[3] = lblKetQua.Text;

            item = new ListViewItem(arr);
            lsvDanhSachHocSinh.Items.Add(item);
        }

        private void lsvDanhSachHocSinh_DoubleClick(object sender, EventArgs e) {
            txtHoTen.Text = lsvDanhSachHocSinh.SelectedItems[0].SubItems[0].Text;
            txtMaSo.Text = lsvDanhSachHocSinh.SelectedItems[0].SubItems[1].Text;
            txtKhoa.Text = lsvDanhSachHocSinh.SelectedItems[0].SubItems[2].Text;
            lblKetQua.Text = lsvDanhSachHocSinh.SelectedItems[0].SubItems[3].Text;
        }
    }
}
