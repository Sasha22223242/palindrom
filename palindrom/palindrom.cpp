using System;

class ��������
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("������ �����:");
        string ����� = Console.ReadLine().Replace(" ", "").ToLower();

        char[] ����� = �����.ToCharArray();
        Array.Reverse(�����);
        string ������������ = new string(�����);

        if (����� == ������������)
        {
            Console.WriteLine("��� ����� � ����������.");
        }
        else
        {
            Console.WriteLine("��� ����� �� � ����������.");
        }
    }
}
