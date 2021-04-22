using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace database
{
    public partial class Form1 : Form
    {
        int n, m, i, j;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            dataGridView1.Columns.Add("ID", "id");
            dataGridView1.Columns.Add("Fa", "Фомилия");
            dataGridView1.Columns.Add("Name", "Имя");
            dataGridView1.Columns.Add("Tel", "Телефон");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int rowNumber = dataGridView1.Rows.Add();

            dataGridView1.Rows[rowNumber].Cells["ID"].Value = rowNumber;
            dataGridView1.Rows[rowNumber].Cells[1].Value = textBox1.Text;
            dataGridView1.Rows[rowNumber].Cells[1].Value = textBox2.Text;
            dataGridView1.Rows[rowNumber].Cells["Tel"].Value = textBox3.Text;

            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            foreach (DataGridViewCell cell in dataGridView1.SelectedCells)
            {
                dataGridView1.Rows.RemoveAt(cell.RowIndex);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            n = dataGridView1.RowCount;
            m = dataGridView1.ColumnCount;

            StreamWriter sw = File.CreateText("data.txt");
            sw.WriteLine(Convert.ToSingle(n));
            sw.WriteLine(Convert.ToSingle(m));

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    sw.WriteLine(Convert.ToSingle(dataGridView1[i,j].Value));
                }
            }
            sw.Close();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            StreamReader f = new StreamReader("data.txt");
            n = Convert.ToInt32(f.ReadLine());
            m = Convert.ToInt32(f.ReadLine());

            for (i = 0; i < n - 1; i++)
            {
                int rowNumber = dataGridView1.Rows.Add();
                dataGridView1.Rows[rowNumber].Cells["ID"].Value = f.ReadLine();
                dataGridView1.Rows[rowNumber].Cells[1].Value = f.ReadLine();
                dataGridView1.Rows[rowNumber].Cells[2].Value = f.ReadLine();
                dataGridView1.Rows[rowNumber].Cells["Tel"].Value = f.ReadLine();
            }
            f.Close();
        }
    }
}