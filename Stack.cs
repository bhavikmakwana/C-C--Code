using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Stack
{
    class Program
    {
       static  int[] stk = new int[10];
        static int st = stk.Length;
        static void Main(string[] args)
        {
            Push(100);
            Push(200);
            Push(300);
            print();
            int  j= pop();
            Console.WriteLine("Last of pop is : "+j);
            print();
        }
        static public void Push(int v) 
        {
            if (st < 0)
            {
                Console.WriteLine("Stack Overaflow");
            }
            else 
            {
                st--;
                stk[st] = v;
            }
        }
        static public int pop()
        {
            if (st > stk.Length)
            {
                Console.WriteLine("Stack Underflow");
                return 0;
            }
            else
            {
                int temp = stk[st];
                st++;
                return temp;
            }
        }
        static public void print()
        {
            Console.WriteLine("Printing the Stack");
            for (int i = st; i < stk.Length; i++)
            {
                Console.WriteLine(stk[i]);
            }
        }

    }
}
