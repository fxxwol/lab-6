#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size_a, const int A, const int B) {
    for (int i = 0; i < size_a; i++)
        a[i] = A + rand() % (B - A + 1);
}
void Print(int* a, const int size_a) {
    for (int i = 0; i < size_a; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
int FindEvenMin(int* a, const int size_a, int& index) {
    int min;
    for (int i = 0; i < size_a; i++)
        if (a[i] % 2 == 0) {
            index = i;
            min = a[i];
            break;
        }
    if (index == -1) {
        cerr << " no elements that satisfy the condition" << endl;
        return 0;
    }

    for (int i = index + 1; i < size_a; i++)
        if (a[i] < min && a[i] % 2 == 0) {
            index = i;
            min = a[i];
        }
    return min;
}
void Replacement(int* a, int size_a)
{
    int tmp;
    int index;
    FindEvenMin(a, size_a, index);
    tmp = a[0];
    a[0] = a[index];
    a[index] = tmp;

}
int main() {
    srand((unsigned)time(NULL));
    const int n = 15;
    int index = -1;
    int a[n];
    int A = -17;
    int B = 53;
    Create(a, n, A, B);
    Print(a, n);
    cout << " The smallest even number = " << FindEvenMin(a, n, index) << endl;
    Replacement(a, n);
    Print(a, n);
    return 0;
}