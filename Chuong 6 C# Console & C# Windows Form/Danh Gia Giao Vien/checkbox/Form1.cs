using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace checkbox {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }
        private void btnNhanXet_Click(object sender, EventArgs e) {
            lblKetQua.Text = "Kết quả: ";
            if (chkDepTrai.Checked)
                lblKetQua.Text += chkDepTrai.Text + " ";
            if (chkTaiNang.Checked)
                lblKetQua.Text += chkTaiNang.Text + " ";
            if (chkKyNang.Checked)
                lblKetQua.Text += chkKyNang.Text + " ";
            if (chkToChat.Checked)
                lblKetQua.Text += chkToChat.Text + " ";
        }
    }
}
