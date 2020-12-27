#include <iostream>
#include <conio.h>

using namespace std;

int val[10], val2[10];
int n;

int Sort(int a, int b)
{
    int t;
    t = val[b];
    val[b] = val[a];
    val[a] = t;
}

int input()
{
    cout << "Masukan Jumlah Angka= ";
    cin >> n;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Angka Ke-" << i + 1 << " = ";
        cin >> val[i];

        val2[i] = val[i];
    }
    cout << endl;
}

void Display()
{
    for (int i = 0; i < n; i++)
    {
        cout << "[" << val[i] << "] ";
    }
    cout << endl;
}

void Eksekusi()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (val[j] < val[j - 1])
            {
                Sort(j, j - 1);
            }
        }
        Display();
    }
    cout << endl;
}

int main()
{
    cout<<"Sorting Array : "<<endl;
    cout<<"=====================\n";
    input();
    Eksekusi();
}