#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* x, const int size, const int A, const int B, int i)
{
    x[i] = A + rand() % (B - A + 1);
    if (i < size-1)
        Create(x, size, A, B, i + 1);        
}
void Print(int* x, const int size, int i)
{
    cout << setw(4) << x[i];
    if (i < size - 1)
        Print(x, size, i + 1);
    else
        cout << endl;   
}

int Sum(const int* const x, const int size,const int i)
{
    if (i < size)
    {
        if (x[i] < 0 && x[i] % 3 != 0)
            return x[i] + Sum(x, size, i + 1);
        else
            return Sum(x, size, i + 1);
    }
    else
        return 0;
    
}

int Amount(const int* const x, const int size, const int i)
{
    if (i < size)
    {
        if (x[i] < 0 && x[i] % 3 != 0)
            return Amount(x, size, i + 1) + 1;
        else
            return Amount(x, size, i + 1);
    }
    else
        return 0;
   
}
void Replacement(int x[], const int size, int i)
{
    if (i < size)
    {
        if (x[i] < 0 && x[i] % 3 != 0)
            x[i] = 0;
        Replacement(x, size, i + 1);
        return;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 24;
    int x[n];
    int A = -17;
    int B = 53;
    Create(x, n, A, B, 0);
    Print(x, n, 0);
    cout << "The sum of the elements that satisfy the condition = " << Sum(x, n, 0) << endl;
    cout << "The number of elements that satisfy the condition = " << Amount(x, n, 0) << endl;
    Replacement(x, n, 0);
    Print(x, n, 0);
    return 0;
}
