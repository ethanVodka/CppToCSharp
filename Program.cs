using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CppToCSharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x = 10;
            int y = 10;

            /*
             * ネイティブメソッド呼び出して処理を行う
             */

            IntPtr instance = NativeMethods.GetInstance(x);

            bool successResist = NativeMethods.Resist(instance);
            Console.WriteLine($"Cpp's Resist result is : {successResist}");
            
            bool successUpdate = NativeMethods.Update(instance);
            Console.WriteLine($"Cpp's Update result is : {successUpdate}");
            
            bool successDelete = NativeMethods.Delete(instance);
            Console.WriteLine($"Cpp's Delete result is : {successDelete}");

            int resultCpp = NativeMethods.AddMethod(instance, x);
            Console.WriteLine($"Cpp's Add result is : {resultCpp}");

            int resultOut = NativeMethods.OutofClassMethd(x, y);
            Console.WriteLine($"Cpp's OutOfClass result is : {resultOut}");


            Console.ReadLine();
        }
    }
}
