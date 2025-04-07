procedure InitializeComponent;
    begin
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(79, 39);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(284, 22);
        self.textBox1.TabIndex := 0;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(79, 85);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(284, 22);
        self.textBox2.TabIndex := 1;
        self.textBox2.TextChanged += textBox2_TextChanged;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(80, 130);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(282, 46);
        self.button1.TabIndex := 2;
        self.button1.Text := 'Шифровать';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(79, 206);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(283, 47);
        self.label1.TabIndex := 3;
        self.label1.Text := 'Итог шифрования';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(80, 13);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(126, 26);
        self.label2.TabIndex := 4;
        self.label2.Text := 'Введите строку:';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(78, 62);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(115, 23);
        self.label3.TabIndex := 5;
        self.label3.Text := 'Введите сдвиг:';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(435, 338);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
