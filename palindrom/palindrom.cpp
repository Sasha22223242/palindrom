using System;

class Програма
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("Введіть рядок:");
        string рядок = Console.ReadLine().Replace(" ", "").ToLower();

        char[] масив = рядок.ToCharArray();
        Array.Reverse(масив);
        string перевернутий = new string(масив);

        if (рядок == перевернутий)
        {
            Console.WriteLine("Цей рядок є паліндромом.");
        }
        else
        {
            Console.WriteLine("Цей рядок не є паліндромом.");
        }
    }
}
