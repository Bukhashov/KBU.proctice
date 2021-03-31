using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Text
{
    public partial class Form1 : Form
    {
        int b = 0;
        public Form1()
        {
            InitializeComponent();
            this.StartPosition = FormStartPosition.CenterScreen;
        }


        private void button1_Click(object sender, EventArgs e)
        {
            if(textBox1.Text == "4")
            {
                label2.Text = "Правильно";
                b = b + 1;
            }
            else
            {
                label2.Text = "Неправильно";
            }

            button1.Visible = false;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (radioButton4.Checked == true)
            {
                label4.Text = "Правильно";
                b = b + 1;
            }
            else
            {
                label4.Text = "Неправильно";
            }

            button2.Visible = false;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (checkBox1.Checked == true && checkBox3.Checked == true && checkBox2.Checked == false)
            {
                label6.Text = "Правильно";
                b = b + 1;
            }
            else
            {
                label6.Text = "Неправильно";
            }

            button3.Visible = false;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            label7.Text = "Набрано баллов = " + Convert.ToSingle(b);

            if (b == 10) label8.Text = "Оценка 5 (отлично)";
            if (b == 7 || b == 8 || b == 9) label8.Text = "Оценка 4 (охрошо)";
            if (b == 6 || b == 5) label8.Text = "Оценка 3 (удовлетворительно";
            if (b == 4 || b == 3) label8.Text = "Оценка 2 (плохо)";
            if (b == 2 || b == 1) label8.Text = "Оценка 1 (все ужасно)";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 0;

            button1.Visible = true;
            button2.Visible = true;
            button3.Visible = true;

            label2.Text = "";
            label4.Text = "";
            label6.Text = "";

            checkBox1.Checked = false;
            checkBox2.Checked = false;
            checkBox3.Checked = false;

            radioButton1.Checked = false;
            radioButton2.Checked = false;
            radioButton3.Checked = false;
            radioButton4.Checked = false;

            b = 0;
            label7.Text = "Набрано баллов = ";
            label8.Text = "";

        }

        private void button6_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}