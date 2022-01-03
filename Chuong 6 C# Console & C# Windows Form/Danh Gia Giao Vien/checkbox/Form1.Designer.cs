namespace checkbox {
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
            this.chkDepTrai = new System.Windows.Forms.CheckBox();
            this.chkTaiNang = new System.Windows.Forms.CheckBox();
            this.chkKyNang = new System.Windows.Forms.CheckBox();
            this.chkToChat = new System.Windows.Forms.CheckBox();
            this.btnNhanXet = new System.Windows.Forms.Button();
            this.lblKetQua = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Montserrat", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(161, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(421, 39);
            this.label1.TabIndex = 0;
            this.label1.Text = "Hãy nhận xét về Quốc Thắng";
            // 
            // chkDepTrai
            // 
            this.chkDepTrai.AutoSize = true;
            this.chkDepTrai.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.chkDepTrai.Location = new System.Drawing.Point(69, 102);
            this.chkDepTrai.Name = "chkDepTrai";
            this.chkDepTrai.Size = new System.Drawing.Size(115, 31);
            this.chkDepTrai.TabIndex = 1;
            this.chkDepTrai.Text = "Đẹp trai";
            this.chkDepTrai.UseVisualStyleBackColor = true;
            // 
            // chkTaiNang
            // 
            this.chkTaiNang.AutoSize = true;
            this.chkTaiNang.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.chkTaiNang.Location = new System.Drawing.Point(69, 139);
            this.chkTaiNang.Name = "chkTaiNang";
            this.chkTaiNang.Size = new System.Drawing.Size(120, 31);
            this.chkTaiNang.TabIndex = 2;
            this.chkTaiNang.Text = "Tài năng";
            this.chkTaiNang.UseVisualStyleBackColor = true;
            // 
            // chkKyNang
            // 
            this.chkKyNang.AutoSize = true;
            this.chkKyNang.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.chkKyNang.Location = new System.Drawing.Point(69, 176);
            this.chkKyNang.Name = "chkKyNang";
            this.chkKyNang.Size = new System.Drawing.Size(210, 31);
            this.chkKyNang.TabIndex = 3;
            this.chkKyNang.Text = "Kỹ năng đỉnh cao";
            this.chkKyNang.UseVisualStyleBackColor = true;
            // 
            // chkToChat
            // 
            this.chkToChat.AutoSize = true;
            this.chkToChat.Font = new System.Drawing.Font("Montserrat", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.chkToChat.Location = new System.Drawing.Point(69, 213);
            this.chkToChat.Name = "chkToChat";
            this.chkToChat.Size = new System.Drawing.Size(201, 31);
            this.chkToChat.TabIndex = 4;
            this.chkToChat.Text = "Tố chất lãnh đạo";
            this.chkToChat.UseVisualStyleBackColor = true;
            // 
            // btnNhanXet
            // 
            this.btnNhanXet.Font = new System.Drawing.Font("Montserrat", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.btnNhanXet.Location = new System.Drawing.Point(256, 250);
            this.btnNhanXet.Name = "btnNhanXet";
            this.btnNhanXet.Size = new System.Drawing.Size(275, 47);
            this.btnNhanXet.TabIndex = 5;
            this.btnNhanXet.Text = "Nhận xét ngay";
            this.btnNhanXet.UseVisualStyleBackColor = true;
            this.btnNhanXet.Click += new System.EventHandler(this.btnNhanXet_Click);
            // 
            // lblKetQua
            // 
            this.lblKetQua.AutoSize = true;
            this.lblKetQua.Font = new System.Drawing.Font("Montserrat", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.lblKetQua.Location = new System.Drawing.Point(69, 319);
            this.lblKetQua.Name = "lblKetQua";
            this.lblKetQua.Size = new System.Drawing.Size(103, 32);
            this.lblKetQua.TabIndex = 6;
            this.lblKetQua.Text = "Kết quả";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 405);
            this.Controls.Add(this.lblKetQua);
            this.Controls.Add(this.btnNhanXet);
            this.Controls.Add(this.chkToChat);
            this.Controls.Add(this.chkKyNang);
            this.Controls.Add(this.chkTaiNang);
            this.Controls.Add(this.chkDepTrai);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Montserrat", 7.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Name = "Form1";
            this.Text = "Đánh Giá";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.CheckBox chkDepTrai;
        private System.Windows.Forms.CheckBox chkTaiNang;
        private System.Windows.Forms.CheckBox chkKyNang;
        private System.Windows.Forms.CheckBox chkToChat;
        private System.Windows.Forms.Button btnNhanXet;
        private System.Windows.Forms.Label lblKetQua;
    }
}
