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
using System.Data.SQLite;
using System.Diagnostics;
namespace API_BlessedSoft
{
    public partial class Form1 : Form
    {
        

        public Form1()
        {
            InitializeComponent();
           
            if (!File.Exists(@"C:\TestDB.db")) // если базы данных нету, то...
            {
                SQLiteConnection.CreateFile(@"D:\TestDB.db"); 
            }
            using (var connection = new SQLiteConnection(@"Data Source=D:\TestDB.db"))
            {
                connection.Open();
                string text_create_table = "CREATE TABLE Users(id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE, Name TEXT NOT NULL, Age INTEGER NOT NULL)";
                SQLiteCommand command = new SQLiteCommand(text_create_table);
                command.Connection = connection;
                command.ExecuteNonQuery();

                
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void label1_Click(object sender, EventArgs e)
        {
            
        }
    }
}
