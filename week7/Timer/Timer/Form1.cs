using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Timers;
using System.Windows.Forms;

namespace Timer
{
    public partial class Form1 : Form
    {
        private int d = 1;
        public Form1()
        {
            InitializeComponent();
        }


        private void timer1_Elapsed(object sender, ElapsedEventArgs e)
        {
            pictureBox1.Left = pictureBox1.Left + d;

            if (pictureBox1.Left >= 640 || pictureBox1.Left <= 0)
            {
                if (d > 0)
                {
                    pictureBox1.Image = Image.FromFile("back.png");
                }

                if (d < 0)
                {
                    pictureBox1.Image = Image.FromFile("forward.png");
                }

                d = -d;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            if (d >= 0)
            {
                d = trackBar1.Value;
            }

            if (d < 0)
            {
                d = -trackBar1.Value;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}