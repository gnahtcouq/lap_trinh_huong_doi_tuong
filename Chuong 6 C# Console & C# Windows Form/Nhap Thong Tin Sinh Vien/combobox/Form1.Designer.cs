namespace combobox {
    partial class Form1 {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing) {
            if (disposing && (components != null)) {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent() {
            this.label1 = new System.Windows.Forms.Label();
            this.lblKhoa = new System.Windows.Forms.Label();
            this.lblHoTen = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.lsbMonHoc = new System.Windows.Forms.ListBox();
            this.btnXacNhan = new System.Windows.Forms.Button();
            this.lblKetQua = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.txtMaSo = new System.Windows.Forms.TextBox();
            this.lblMaSo = new System.Windows.Forms.Label();
            this.btnLuuDS = new System.Windows.Forms.Button();
            this.txtHoTen = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.txtKhoa = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.lsvDanhSachHocSinh = new System.Windows.Forms.ListView();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(37, 280);
            this.label1.Margin = new System.Windows.Forms.Padding(5, 0, 5, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(124, 27);
            this.label1.TabIndex = 0;
            this.label1.Text = "Nhập khoa";
            // 
            // lblKhoa
            // 
            this.lblKhoa.AutoSize = true;
            this.lblKhoa.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.lblKhoa.Location = new System.Drawing.Point(27, 131);
            this.lblKhoa.Margin = new System.Windows.Forms.Padding(5, 0, 5, 0);
            this.lblKhoa.Name = "lblKhoa";
            this.lblKhoa.Size = new System.Drawing.Size(65, 27);
            this.lblKhoa.TabIndex = 2;
            this.lblKhoa.Text = "Khoa";
            // 
            // lblHoTen
            // 
            this.lblHoTen.AutoSize = true;
            this.lblHoTen.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.lblHoTen.Location = new System.Drawing.Point(27, 55);
            this.lblHoTen.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.lblHoTen.Name = "lblHoTen";
            this.lblHoTen.Size = new System.Drawing.Size(82, 27);
            this.lblHoTen.TabIndex = 5;
            this.lblHoTen.Text = "Họ Tên";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label3.Location = new System.Drawing.Point(37, 394);
            this.label3.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(192, 27);
            this.label3.TabIndex = 7;
            this.label3.Text = "Đăng ký môn học";
            // 
            // lsbMonHoc
            // 
            this.lsbMonHoc.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.lsbMonHoc.FormattingEnabled = true;
            this.lsbMonHoc.ItemHeight = 27;
            this.lsbMonHoc.Location = new System.Drawing.Point(307, 394);
            this.lsbMonHoc.Margin = new System.Windows.Forms.Padding(4);
            this.lsbMonHoc.Name = "lsbMonHoc";
            this.lsbMonHoc.SelectionMode = System.Windows.Forms.SelectionMode.MultiSimple;
            this.lsbMonHoc.Size = new System.Drawing.Size(368, 139);
            this.lsbMonHoc.TabIndex = 8;
            // 
            // btnXacNhan
            // 
            this.btnXacNhan.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.btnXacNhan.Location = new System.Drawing.Point(413, 554);
            this.btnXacNhan.Margin = new System.Windows.Forms.Padding(4);
            this.btnXacNhan.Name = "btnXacNhan";
            this.btnXacNhan.Size = new System.Drawing.Size(157, 37);
            this.btnXacNhan.TabIndex = 9;
            this.btnXacNhan.Text = "Xác Nhận";
            this.btnXacNhan.UseVisualStyleBackColor = true;
            this.btnXacNhan.Click += new System.EventHandler(this.btnXacNhan_Click);
            // 
            // lblKetQua
            // 
            this.lblKetQua.AutoSize = true;
            this.lblKetQua.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.lblKetQua.Location = new System.Drawing.Point(27, 169);
            this.lblKetQua.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.lblKetQua.Name = "lblKetQua";
            this.lblKetQua.Size = new System.Drawing.Size(229, 27);
            this.lblKetQua.TabIndex = 10;
            this.lblKetQua.Text = "Kết quả đăng ký môn";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label4.Location = new System.Drawing.Point(37, 169);
            this.label4.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(229, 27);
            this.label4.TabIndex = 11;
            this.label4.Text = "Nhập mã số sinh viên";
            // 
            // txtMaSo
            // 
            this.txtMaSo.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.txtMaSo.Location = new System.Drawing.Point(307, 169);
            this.txtMaSo.Margin = new System.Windows.Forms.Padding(4);
            this.txtMaSo.Name = "txtMaSo";
            this.txtMaSo.Size = new System.Drawing.Size(368, 32);
            this.txtMaSo.TabIndex = 12;
            // 
            // lblMaSo
            // 
            this.lblMaSo.AutoSize = true;
            this.lblMaSo.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.lblMaSo.Location = new System.Drawing.Point(27, 93);
            this.lblMaSo.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.lblMaSo.Name = "lblMaSo";
            this.lblMaSo.Size = new System.Drawing.Size(166, 27);
            this.lblMaSo.TabIndex = 13;
            this.lblMaSo.Text = "Mã số sinh viên";
            // 
            // btnLuuDS
            // 
            this.btnLuuDS.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.btnLuuDS.Location = new System.Drawing.Point(76, 554);
            this.btnLuuDS.Margin = new System.Windows.Forms.Padding(4);
            this.btnLuuDS.Name = "btnLuuDS";
            this.btnLuuDS.Size = new System.Drawing.Size(249, 37);
            this.btnLuuDS.TabIndex = 15;
            this.btnLuuDS.Text = "Lưu Vào Danh Sách";
            this.btnLuuDS.UseVisualStyleBackColor = true;
            this.btnLuuDS.Click += new System.EventHandler(this.btnLuuDS_Click);
            // 
            // txtHoTen
            // 
            this.txtHoTen.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.txtHoTen.Location = new System.Drawing.Point(307, 58);
            this.txtHoTen.Margin = new System.Windows.Forms.Padding(4);
            this.txtHoTen.Name = "txtHoTen";
            this.txtHoTen.Size = new System.Drawing.Size(368, 32);
            this.txtHoTen.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label2.Location = new System.Drawing.Point(37, 58);
            this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(139, 27);
            this.label2.TabIndex = 3;
            this.label2.Text = "Nhập họ tên";

            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.txtKhoa);
            this.groupBox1.Controls.Add(this.txtMaSo);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.btnXacNhan);
            this.groupBox1.Controls.Add(this.lsbMonHoc);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.txtHoTen);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.groupBox1.Location = new System.Drawing.Point(12, 35);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(731, 675);
            this.groupBox1.TabIndex = 16;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Nhập Thông Tin Sinh Viên";
            // 
            // txtKhoa
            // 
            this.txtKhoa.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.txtKhoa.Location = new System.Drawing.Point(307, 280);
            this.txtKhoa.Margin = new System.Windows.Forms.Padding(4);
            this.txtKhoa.Name = "txtKhoa";
            this.txtKhoa.Size = new System.Drawing.Size(368, 32);
            this.txtKhoa.TabIndex = 15;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.btnLuuDS);
            this.groupBox2.Controls.Add(this.lblMaSo);
            this.groupBox2.Controls.Add(this.lblKetQua);
            this.groupBox2.Controls.Add(this.lblHoTen);
            this.groupBox2.Controls.Add(this.lblKhoa);
            this.groupBox2.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.groupBox2.Location = new System.Drawing.Point(765, 35);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(399, 675);
            this.groupBox2.TabIndex = 17;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Xác Nhận Thông Tin Sinh Viên";
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.lsvDanhSachHocSinh);
            this.groupBox3.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.groupBox3.Location = new System.Drawing.Point(1191, 35);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(656, 675);
            this.groupBox3.TabIndex = 18;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Danh Sách Sinh Viên";
            // 
            // lsvDanhSachHocSinh
            // 
            this.lsvDanhSachHocSinh.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.lsvDanhSachHocSinh.FullRowSelect = true;
            this.lsvDanhSachHocSinh.GridLines = true;
            this.lsvDanhSachHocSinh.HideSelection = false;
            this.lsvDanhSachHocSinh.Location = new System.Drawing.Point(6, 31);
            this.lsvDanhSachHocSinh.Name = "lsvDanhSachHocSinh";
            this.lsvDanhSachHocSinh.Size = new System.Drawing.Size(644, 638);
            this.lsvDanhSachHocSinh.TabIndex = 0;
            this.lsvDanhSachHocSinh.UseCompatibleStateImageBehavior = false;
            this.lsvDanhSachHocSinh.View = System.Windows.Forms.View.Details;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(13F, 27F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.ClientSize = new System.Drawing.Size(1859, 722);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Margin = new System.Windows.Forms.Padding(5, 4, 5, 4);
            this.Name = "Form1";
            this.Text = "Thông Tin Sinh Viên";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label lblKhoa;
        private System.Windows.Forms.Label lblHoTen;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ListBox lsbMonHoc;
        private System.Windows.Forms.Button btnXacNhan;
        private System.Windows.Forms.Label lblKetQua;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox txtMaSo;
        private System.Windows.Forms.Label lblMaSo;
        private System.Windows.Forms.Button btnLuuDS;
        private System.Windows.Forms.TextBox txtHoTen;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.ListView lsvDanhSachHocSinh;
        private System.Windows.Forms.TextBox txtKhoa;
    }
}
