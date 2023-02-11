using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Metadata.W3cXsd2001;

namespace CppToCSharp
{
    public class NativeMethods
    {
        //インスタンス取得
        [DllImport(@"C:\Users\pikas\source\repos\CppToCSharp\MyDll\x64\Debug\MyDll.dll")]
        public static extern IntPtr GetInstance(int x);

        //クラスないメソッド取得
        [DllImport(@"C:\Users\pikas\source\repos\CppToCSharp\MyDll\x64\Debug\MyDll.dll")]
        public static extern bool Resist(IntPtr intPtr);

        [DllImport(@"C:\Users\pikas\source\repos\CppToCSharp\MyDll\x64\Debug\MyDll.dll")]
        public static extern bool Update(IntPtr intPtr);

        [DllImport(@"C:\Users\pikas\source\repos\CppToCSharp\MyDll\x64\Debug\MyDll.dll")]
        public static extern bool Delete(IntPtr intPtr);

        [DllImport(@"C:\Users\pikas\source\repos\CppToCSharp\MyDll\x64\Debug\MyDll.dll")]
        public static extern int AddMethod(IntPtr intPtr, int x);

        //クラス外メソッド
        [DllImport(@"C:\Users\pikas\source\repos\CppToCSharp\MyDll\x64\Debug\MyDll.dll")]
        public static extern int OutofClassMethd(int x, int y);
    }
}
