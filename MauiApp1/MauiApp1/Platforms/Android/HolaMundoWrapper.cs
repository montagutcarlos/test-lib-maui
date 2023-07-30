using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace MauiApp1
{
    public static partial class HolaMundoWrapper
    {
        [DllImport("libHolaMundo.so")]
        public extern static int ObtenerNumero();

        public static partial int ObtenerNumeroMaui()
        {
            return ObtenerNumero();
        }
    }

}
