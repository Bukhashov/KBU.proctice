using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DataGridVeiw
{
    public partial class Form1 : Form
    {
        float[,] a = new float[100, 100];
        int i, j, n, m;
        Random rand = new Random();
        
        public Form1()
        {
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            n = Convert.ToInt32(textBox1.Text);
            m = Convert.ToInt32(textBox2.Text);

            dataGridView1.RowCount = n;
            dataGridView1.ColumnCount = m;

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    a[i, j] = rand.Next(0, 21) - 10;
                    dataGridView1[i, j].Value = Convert.ToString(a[i, j]);
                    
                }
            }
        }
    }
}