#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* x, const int size, const int A, const int B)
{
    for (int i = 0; i < size; i++)
        x[i] = A + rand() % (B - A + 1);
}
void Print(int* x, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << x[i];
    cout << endl;
}

int Sum(const int* const x, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (x[i] < 0 && x[i] % 3 != 0)
            S += x[i];
    return S;
}

int Amount(const int* const x, const int size)
{
    int a = 0;
    for (int i = 0; i < size; i++)
        if (x[i] < 0 && x[i] % 3 != 0)
            a++;
    return a;
}
void Replacement(int x[], const int size)
{
    for (int i = 0; i < size; i++)   
        if (x[i] < 0 && x[i] % 3 != 0)
            x[i] = 0;   
}


int main()
{
    srand((unsigned)time(NULL));
    const int n = 24;
    int x[n];
    int A = -17;
    int B = 53;
    Create(x, n, A, B);
    Print(x, n);
    cout << "The sum of the elements that satisfy the condition = " << Sum(x, n) << endl;
    cout << "The number of elements that satisfy the condition = " << Amount(x, n) << endl;
    Replacement(x, n);
    Print(x, n);
    return 0;
}
