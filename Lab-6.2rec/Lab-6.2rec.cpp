#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size_a, const int A, const int B, int i)
{
    a[i] = A + rand() % (B - A + 1);
    if (i < size_a - 1)
        Create(a, size_a, A, B, i + 1);
}
void Print(int* a, const int size_a, int i)
{
    cout << setw(4) << a[i];
    if (i < size_a - 1)
        Print(a, size_a, i + 1);
    else
        cout << endl;
}
int Index(int* a, const int size_a, int& min, int i)
{
    if (a[i] % 2 == 0)
    {
        min = a[i];
        return i;
    }

    if (i < size_a - 1)
        return Index(a, size_a, min, i + 1);
    else
        return -1;
}

int FindEvenMin(int* a, const int size_a, int min, int& index, int i)
{
    if (a[i] < min && a[i] % 2 == 0)
    {
        min = a[i];
        index = i;
    }
    if (i < size_a - 1)
        return FindEvenMin(a, size_a, min, index, i + 1);
    else
        return min;
}
void Replacement(int* a, int size_a, int min, int& index, int i)
{
    int tmp = a[0];
    FindEvenMin(a, size_a, min, index, 0);
    if (i < size_a - 1)
        Replacement(a, size_a, min, index, i + 1);
    else
    {
        a[0] = a[index];
        a[index] = tmp;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 15;
    int a[n];
    int A = -17;
    int B = 53;
    Create(a, n, A, B, 0);
    Print(a, n, 0);
    int min, index{};
    int imin = Index(a, n, min, 0);
    if (imin == -1)
        cerr << "no elements that satisfy the condition" << endl;
    else
        cout << "The smallest even number = " << FindEvenMin(a, n, min, index, imin + 1) << endl;
    Replacement(a, n, min, index, 0);
    Print(a, n, 0);
    return 0;
}
