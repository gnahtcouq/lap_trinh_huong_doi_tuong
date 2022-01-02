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
    public partial class Form2 : Form {
        public Form2() {
            InitializeComponent();
        }

        public string str;
        private void Form2_Load(object sender, EventArgs e) {
            lblChao.Text = "Chào bạn " + str;
        }
    }
}
