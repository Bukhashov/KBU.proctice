using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Task_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void MainFunction(object sender, EventArgs e)
        {
            double numberOne, numberTwo,  p;

            numberOne = Convert.ToDouble(textBox1.Text);
            numberTwo = Convert.ToDouble(textBox2.Text);

            p = numberOne + numberTwo;

            textBox3.Text = Convert.ToString(p);

        }


    }
}