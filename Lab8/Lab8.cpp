using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
 
namespace ConsoleApplication5
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[100];
            int n = 100;
            int f = 0;
 
            int k = 0;
            
            int i;
            int j;
            Random r = new Random();
            for (i = 0; i < n; i++)
            {
                a[i] = r.Next(-50, 50);
                Console.Write("\t" + a[i]);
            }
            Console.WriteLine();
            for (i = 0; i < n; i++)
            {
                if (a[i] >= 0)
                {
                    f = i;
                    for (j = i; j < n && a[j] > 0; j++)
                        i = j;
 
                    if (j - f > 1 && f < j - 1)
                    {
                        k = a[f];
                        a[f] = a[j - 1];
                        a[j - 1] = f;
                        f++;
                        j--;
                    }
                }
            }
            for (i = 0; i < n; i++)
            {
 
                Console.Write("\t" + a[i]);
            }
            Console.WriteLine();
 
            Console.ReadKey();
        }
    }
}