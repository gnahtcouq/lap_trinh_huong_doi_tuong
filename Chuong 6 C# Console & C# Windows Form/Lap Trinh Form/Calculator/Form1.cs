using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        //int dem = 0;
        private void btnXuLy_Click(object sender, EventArgs e) {
            //dem++;
            //if (dem % 2 != 0)
            //    lblTen.Text = "Chào bạn Quốc Thắng";
            //else
            //    lblTen.Text = "Hôm nay bạn khỏe không?";
            //MessageBox.Show("Thông báo");

            lblTen.Text = "Chào bạn " + txtTen.Text;
        }

        private void btnCong_Click(object sender, EventArgs e) {
            try {
                double so2 = double.Parse(txtSo2.Text);
                double so1 = double.Parse(txtSo1.Text);
                double tong = so1 + so2;
                lblKetQua.Text = "Tổng = " + tong.ToString();
            }
            catch {
                MessageBox.Show("Lỗi kiểu dữ liệu");
                txtSo1.Text = "";
                txtSo2.Text = "";
                txtSo1.Focus(); // Hiển thị con trỏ ngay ô textbox
            }
        }

        private void btnTru_Click(object sender, EventArgs e) {
            try {
                double so1 = double.Parse(txtSo1.Text);
                double so2 = double.Parse(txtSo2.Text);
                double hieu = so1 - so2;
                lblKetQua.Text = "Hiệu = " + hieu.ToString();
            }
            catch {
                MessageBox.Show("Lỗi kiểu dữ liệu");
                txtSo1.Text = "";
                txtSo2.Text = "";
                txtSo1.Focus(); // Hiển thị con trỏ ngay ô textbox
            }
        }

        private void btnNhan_Click(object sender, EventArgs e) {
            try {
                double so1 = double.Parse(txtSo1.Text);
                double so2 = double.Parse(txtSo2.Text);
                double tich = so1 * so2;
                lblKetQua.Text = "Tích = " + tich.ToString();
            }
            catch {
                MessageBox.Show("Lỗi kiểu dữ liệu");
                txtSo1.Text = "";
                txtSo2.Text = "";
                txtSo1.Focus(); // Hiển thị con trỏ ngay ô textbox
            }
        }

        private void btnChia_Click(object sender, EventArgs e) {
            try {
                double so1 = double.Parse(txtSo1.Text);
                double so2 = double.Parse(txtSo2.Text);
                double thuong = so1 / so2;
                lblKetQua.Text = "Thương = " + thuong.ToString();
            }
            catch {
                MessageBox.Show("Lỗi kiểu dữ liệu");
                txtSo1.Text = "";
                txtSo2.Text = "";
                txtSo1.Focus(); // Hiển thị con trỏ ngay ô textbox
            }
        }

        private void btnMoForm_Click(object sender, EventArgs e) {
            Form2 frm2 = new Form2();
            //frm2.Show();
            frm2.str = txtTen.Text;
            frm2.ShowDialog();
        }
    }
}
