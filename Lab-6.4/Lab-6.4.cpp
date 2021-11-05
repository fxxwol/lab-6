#include <iostream>
#include <iomanip>

using namespace std;
void Create(int* &a, const int size, const int Low, const int High)
{
	a = new int[size]; 
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Product(int* a, const int size)
{
	int P = 1;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0)
		 P *= a[i];
	}
	return P;
}
int Imin(int* a, const int size)
{
	int min = a[0];
	int imin{};
	for (int i = 1; i < size; i++)
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	return imin;
}
int Sum(int* a, const int size)
{
	int imin = Imin(a, size);
	int S = 0;
	for (int i = 0; i < imin; i++)
	{
		if (imin != 0)
			S += a[i];	
	}
	if (imin == 0)
	{
		cerr << " Sumarry can`t be found" << endl;
		return 0;
	}
	return S;
}

void Sort(int* a, const int size) 
{
	for (int i = 1; i < size; i++)
	{
		int k = 0;
		for (int j = 0; j < size - 2; j++) 
				if (a[j] > a[j + 2]) 
				{
					int tmp = a[j];
					a[j] = a[j + 2];
					a[j + 2] = tmp;
					k = 1;
				}
		if (k == 0)
			return;
	}
	for (int i = 1; i < size; i++)
	{
		int k = 0;
		for (int j = 1; j < size - 2; j++) 
				if (a[j] > a[j + 2])
				{
					int tmp = a[j];
					a[j] = a[j + 2];
					a[j + 2] = tmp;
					k = 1;
				}
		if (k == 0)
			return;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << " n = "; cin >> n;
	int* a;
	int Low = -17;
	int High = 30;
	Create(a, n, Low, High);
	Print(a, n);
	cout << " Product of positive elements = " << Product(a, n) << endl;
	cout << " Summary of elements before minimal = " << Sum(a, n) << endl;
	Sort(a, n);
	Print(a, n);
	delete[]a;
	return 0;
}
