using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace practice_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private double g;
        // option
        private void button2_Click(object sender, EventArgs e)
        {
            double x = Convert.ToDouble(textBox1.Text),
                b = Convert.ToDouble(textBox1.Text);

            if (radioButton1.Checked)
            {
                fanckSin(x, b);
                fankOutput(x, b, "sin");
                
            }else if (radioButton2.Checked)
            {
                fanckCos(x, b);
                fankOutput(x, b, "cos");
                
            }else if (radioButton3.Checked)
            {
                fanckExp(x, b);
                fankOutput(x, b, "exp");
            }
        }

        void fanckSin(double x, double b)
        {
            if (0.5 < (x * b) && (x * b) < 10)
            {
                g = Math.Exp(Math.Sin(x) - Math.Abs(b));
                
            } else if (0.1 < (x * b) && (x * b) > 0.5)
            {
                g = Math.Sqrt(Math.Abs(Math.Sin(x) + b));
            }
            else
            {
                g = 2 * Math.Pow(Math.Sin(x), 2);
            }
        }

        void fanckCos(double x, double b)
        {
            if (0.5 < (x * b) && (x * b) < 10)
            {
                g = Math.Exp(Math.Cos(x) - Math.Abs(b));
                
            } else if (0.1 < (x * b) && (x * b) > 0.5)
            {
                g = Math.Sqrt(Math.Abs(Math.Cos(x) + b));
            }
            else
            {
                g = 2 * Math.Pow(Math.Cos(x), 2);
            }
        }
        void fanckExp(double x, double b)
        {
            if (0.5 < (x * b) && (x * b) < 10)
            {
                g = Math.Exp(Math.Exp(x) - Math.Abs(b));
                
            } else if (0.1 < (x * b) && (x * b) > 0.5)
            {
                g = Math.Sqrt(Math.Abs(Math.Exp(x) + b));
            }
            else
            {
                g = 2 * Math.Pow(Math.Exp(x), 2);
            }
        }

        void fankOutput(double x, double b, String nameFank)
        {
            textBox3.Text += Environment.NewLine + "Выбрана функция " + nameFank;
            textBox3.Text += Environment.NewLine + "X: " + x;
            textBox3.Text += Environment.NewLine + "B: " + b;

            textBox3.Text += Environment.NewLine + "g: " + g;
        }

        // close
        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
        }
    }
}