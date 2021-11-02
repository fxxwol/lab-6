#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size_a, const int A, const  int B)
{
    for (int i = 0; i < size_a; i++)
        a[i] = A + rand() % (B - A + 1);
}
template <typename T>
void Create(T* a, const int size_a, const T A, const T B)
{
    for (int i = 0; i < size_a; i++)
        a[i] = A + rand() % (B - A + 1);
}
void Print(int* a, const int size_a)
{
    for (int i = 0; i < size_a; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
template <typename T>
void Print(T* a, const int size_a)
{
    for (int i = 0; i < size_a; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
int Max(int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
template <typename T>
T Max(T* a, const int size)
{
    T max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 15;
    int a[n];
    int A = -17;
    int B = 53;
    Create<int>(a, n, A, B);
    Print<int>(a, n);
    cout << "The largest number = " << Max<int>(a, n) << endl;
    
    return 0;
}
