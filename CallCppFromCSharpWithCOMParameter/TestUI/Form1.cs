using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using COMLib;

namespace TestUI
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            _piDoWork = new DoWork();
            _piDoWork.Initialize();
        }

        private void _btnTest_Click(object sender, EventArgs e)
        {
            _piDoWork.Test();
        }

        private DoWork _piDoWork;
    }
}
