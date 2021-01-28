using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Colculator
{
    public partial class Form1 : Form
    {
        public string NumberOne;
        public bool NumberTwo;
        public string Option;
        public Form1()
        {
            InitializeComponent();
        }
        
        private void buttonNumber_Click(object sender, EventArgs e)
        {
            if (NumberTwo)
            {
                NumberTwo = false;
                textBox1.Text = "0";
            }
            Button button = (Button)sender;
            if (textBox1.Text == "0")
            {
                textBox1.Text = button.Text;
            }
            else
            {
                textBox1.Text = textBox1.Text + button.Text;
            }
        }

        private void buttonAC_Click(object sender, EventArgs e)
        {
            textBox1.Text = "0";
        }
        
        private void buttonOption_Click(object sender, EventArgs e)
        {
            Button button = (Button) sender;
            Option = button.Text;
            NumberOne = textBox1.Text;
            NumberTwo = true;
        }
        private void buttonOutput_Click(object sender, EventArgs e)
        {
            double NumberOptionOne, NumberOptionTwo, res;
            NumberOptionOne  = Convert.ToDouble(NumberOne);
            NumberOptionTwo = Convert.ToDouble(textBox1.Text);
            
            res = 0;
            if (Option == "+")
            {
                res = NumberOptionOne + NumberOptionTwo;
            }
            if (Option == "-")
            {
                res = NumberOptionOne - NumberOptionTwo;
            }
            if (Option == "*")
            {
                res = NumberOptionOne * NumberOptionTwo;
            }
            if (Option == "/")
            {
                res = NumberOptionOne / NumberOptionTwo;
            }
            
            Option = "=";
            NumberTwo = true;
            textBox1.Text = res.ToString();
        }


        private void mathpow(object sender, EventArgs e)
        {
            double mathpow, res;
                mathpow = Convert.ToDouble(textBox1.Text);
                res = Math.Pow(mathpow, 2);
                textBox1.Text = res.ToString();
        }
        private void mathsqrt(object sender, EventArgs e)
        {
            double mathsqrt, res;
            mathsqrt = Convert.ToDouble(textBox1.Text);
            res = Math.Sqrt(mathsqrt);
            textBox1.Text = res.ToString();
        }
    }
}