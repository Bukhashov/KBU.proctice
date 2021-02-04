using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace project_6
{
    public partial class Form1 : Form
    {
        private double B, X, Y, Z;
        
        public Form1()
        {
            InitializeComponent();
            textBox4.Text +=  "Sutdent: Bukhashov Berik";
            textBox4.Text += Environment.NewLine + "Task: 6";
        }
        private void button1_Click(object sender, EventArgs e)
        {
            
            X = double.Parse(textBox1.Text);
            textBox4.Text += Environment.NewLine + "X: " + X.ToString();
            Y = double.Parse(textBox2.Text);
            textBox4.Text += Environment.NewLine + "Y: " + Y.ToString();
            Z = double.Parse(textBox3.Text);
            textBox4.Text += Environment.NewLine + "Z: " + Z.ToString();
            
            B = Math.Sqrt(10 * (Math.Pow(Math.Sqrt(X),3) + Math.Pow(X, Y+2)))  * (Math.Pow(Math.Asin(Z),2) - Math.Abs(X - Y));

            textBox4.Text += Environment.NewLine + "B: " + B.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            textBox4.Text = "";
            textBox4.Text +=  "Sutdent: Bukhashov Berik";
            textBox4.Text += Environment.NewLine + "Task: 6";
        }
    }
}