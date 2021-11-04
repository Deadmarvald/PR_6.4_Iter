//Lab_06_4_Iter.cpp
// Вольвенко Іван
// Лабораторна робота № 6.4
// Опрацювання та впорядкування одновимірних динамічних масивів
// Варіант 13

#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void Create(int mas[], const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = Low + rand() % (High - Low + 1);
	}
}

void Print(int mas[], const int n)
{
	cout << "a[ ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "]" << endl;
}

int Kil(int mas[], const int n, const int A, const int B)
{
	int kil = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] >= A && mas[i] <= B)
		{
			kil += 1;
		}
	}
	return kil;
}

int MaxInd(int mas[], const int n)
{
	int max = 0, Maxind = 0;
	for (int i = 1; i < n; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
			Maxind = i;
		}
	}
	return Maxind;
}

int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i > MaxInd(mas, n))
		{
			s += mas[i];
		}
	}
	return s;
}

void Sort(int mas[], const int n)
{
	for (int i = 1; i < n; i++)
	{
		int k = 0;
		for (int j = 0; j < n - 1; j++)
		{
			if (abs(mas[j]) < abs(mas[j + 1]))
			{
				int tmp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = tmp;
				k = 1;
			}
		}
		if (k == 0) return;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int n, A, B;

	cout << "n = "; cin >> n;

	int *a = new int[n];
	int Low = -5;
	int High = 5;

	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;

	Create(a, n, Low, High);
	Print(a, n);

	cout << "k = " << Kil(a, n, A, B) << endl;
	cout << "Sum = " << Sum(a, n) << endl;

	Sort(a, n);
	Print(a, n);

	return 0;
}