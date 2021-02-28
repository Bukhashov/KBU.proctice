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
            textBox1.Text = "16.55 * 10^-3";
            textBox2.Text = "-2.75";
            textBox3.Text = "0.15";
            textBox4.Text +=  "Sutdent: Bukhashov Berik";
            textBox4.Text += Environment.NewLine + "Task: 6";
            textBox4.Text += Environment.NewLine + "B: -38.902";
        }
        private void button1_Click(object sender, EventArgs e)
        {
            
            X = Double.Parse(textBox1.Text);
            textBox4.Text += Environment.NewLine + "X: " + X.ToString();
            Y = Double.Parse(textBox2.Text);
            textBox4.Text += Environment.NewLine + "Y: " + Y.ToString();
            Z = Double.Parse(textBox3.Text);
            textBox4.Text += Environment.NewLine + "Z: " + Z.ToString();
            
            B = Math.Sqrt(10 * Math.Sqrt(Math.Pow(Math.Sqrt(X),3) + Math.Pow(X, Y+ 2))) + (Math.Pow(Math.Asin(Z - Math.Abs(X - Y)),2));

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