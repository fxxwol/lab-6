#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int A, const int B, const int i)
{
    a[i] = A + rand() % (B - A + 1);
    if (i < size - 1)
        Create(a, size, A, B, i + 1);
}
template <typename T>
void Create(T* a, const int size, const T A, const T B, const int i)
{
    a[i] = A + rand() % (B - A + 1);
    if (i < size - 1)
        Create(a, size, A, B, i + 1);
}
void Print(int* a, const int size, const int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}
template <typename T>
void Print(T* a, const int size, const int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}
int Max(int* a, const int size, int max, const int i)
{
    if(a[i] > max)
       max = a[i];
    if (i < size - 1)
        return Max(a, size, max, i+1);
    else
        return max;    
}
template <typename T>
T Max(T* a, const int size, T max, const int i)
{
    if (a[i] > max)
        max = a[i];
    if (i < size - 1)
        return Max(a, size, max, i + 1);
    else
        return max;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 15;
    int a[n];
    int A = -17;
    int B = 53;
    Create<int>(a, n, A, B, 0);
    Print<int>(a, n, 0);
    cout << "The largest number = " << Max<int>(a, n, a[0], 1) << endl;

    return 0;

}
