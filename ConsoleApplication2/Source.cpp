#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

void main()
{
Start:
	setlocale(LC_ALL, "Rus");
	int zadanie;
	cout << "Введите номер задания: ";
	cin >> zadanie;
	switch (zadanie)
	{

	case 1:
	{
		system("cls");
		cout << "Задание 1." << endl;
		cout << "Для заданного n в одном цикле вычислить n! и n2." << endl;
		cout << "Решение:" << endl;
		int n;
		int fak = 1;
		cout << "Введите число n: ";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			fak *= i;
			if (i == 2)
				cout << n << "^2 = " << pow(n, i) << endl;
		}
		cout << n << "! = " << fak << endl;
		goto Start;
		break;
	}
	case 2:
	{
		system("cls");
		cout << "Задание 2." << endl;
		cout << "Задано натуральные числа от 10 до N. Найти наибольшую цифру целого десятичного числа." << endl;
		cout << "Решение:" << endl;
		int N, max, j, k = 0;
		cout << "Введите число N: ";
		cin >> N;
		for (int i = 10; i <= N; i++)
		{
			k = i;
			max = 0;
			while (k >= 1)
			{
				j = k % 10;
				k /= 10;
				if (j > max)
					max = j;
			}
			cout << "Для " << i << " максимальная цифра - " << max << endl;
		}
		goto Start;
		break;
	}
	case 3:
	{
		system("cls");
		cout << "Задание 3." << endl;
		cout << "Задано натуральные числа от 10 до N. Для натурального числа найти первую цифру и сумму его цифр." << endl;
		cout << "Решение:" << endl;
		int N, sum, j, k = 0;
		cout << "Введите число N: ";
		cin >> N;
		for (int i = 10; i <= N; i++)
		{
			k = i;
			sum = 0;
			while (k >= 1)
			{
				j = k % 10;
				k /= 10;
				sum += j;
			}
			cout << "Для " << i << " первая цифра - " << j << ", сумма цифр - " << sum << endl;
		}
		goto Start;
		break;
	}
	case 4:
	{
		system("cls");
		cout << "Задание 4." << endl;
		cout << "Определить, является ли целое число симметричным, т. е. таким числом, которое одинаково читается слева направо и справа налево (палиндром, перевертыш). Например, числа 123321, 202, 9889, 5555." << endl;
		cout << "Решение:" << endl;
		int N, n, K = 0, k, N1 = 0, N2 = 0, N12, N22, i = 0, z, y;
		cout << "Введите число: ";
		cin >> N;
		n = N;
		N12 = N;
		N22 = N;
		while (n > 0)
		{
			n /= 10;
			K++;
		}
		k = K;
		if (k % 2 == 0)
		{
			y = k;
			while (k != 0)
			{
				N1 = N12;
				N2 = N22;
				z = pow(10, y);
				N1 = (N12 / (z / 10)) % 10;
				N2 = N22 % 10;
				N22 /= 10;
				if (N1 == N2)
				{
					i++;
					y--;
					k -= 2;
				}
				else
				{
					y--;
					k -= 2;
				}
			}
			if (i == K / 2)
				cout << "Число " << N << " - палиндром." << endl;
			else
				cout << "Число " << N << " - не палиндром." << endl;
		}
		else
		{
			y = k;
			while (k != 1)
			{
				N1 = N12;
				N2 = N22;
				z = pow(10, y);
				N1 = (N12 / (z / 10)) % 10;
				N2 = N22 % 10;
				N22 /= 10;
				if (N1 == N2)
				{
					i++;
					y--;
					k -= 2;
				}
				else
				{
					y--;
					k -= 2;
				}
			}
			if (i == K / 2)
				cout << "Число " << N << " - палиндром." << endl;
			else
				cout << "Число " << N << " - не палиндром." << endl;
		}
		goto Start;
		break;
	}
	case 5:
	{
		system("cls");
		cout << "Задание 5." << endl;
		cout << "Вывести сумму квадратов чисел от 12 до 80 по 1- числу в строке." << endl;
		cout << "Решение:" << endl;
		int i1;
		int i2;
		for (int i = 12; i <= 80; i++)
		{
			i1 = i / 10;
			i2 = i % 10;
			cout << "Для " << i << " = " << ((i1*i1) + (i2*i2)) << endl;
		}
		goto Start;
		break;
	}
	case 6:
	{
		system("cls");
		cout << "Задание 6." << endl;
		cout << "Вывести разность квадратов чисел от 22 до 88 по 1- числу в строке." << endl;
		cout << "Решение:" << endl;
		int i1;
		int i2;
		for (int i = 12; i <= 80; i++)
		{
			i1 = i / 10;
			i2 = i % 10;
			cout << "Для " << i << " = " << ((i1*i1) - (i2*i2)) << endl;
		}
		goto Start;
		break;
	}
	case 7:
	{
		system("cls");
		cout << "Задание 7." << endl;
		cout << "Дано вещественное число A и натуральные числа от 1 до N (> 0). Найти разности квадратов A и натуральных чисел N ." << endl;
		cout << "Решение:" << endl;
		cout << "Введите вещественное число А: ";
		float A;
		cin >> A;
		cout << "Введите число N (> 0): ";
		int N;
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			cout << "Для " << i << " = " << ((A*A) - (i*i)) << endl;
		}
		goto Start;
		break;
	}
	case 8:
	{
		system("cls");
		cout << "Задание 8." << endl;
		cout << "Задано натуральные числа от 10 до N. Найти наименьшую цифру целого десятичного числа." << endl;
		cout << "Решение:" << endl;
		int N, min, j, k = 0;
		cout << "Введите число N: ";
		cin >> N;
		for (int i = 10; i <= N; i++)
		{
			k = i;
			min = i;
			while (k >= 1)
			{
				j = k % 10;
				k /= 10;
				if (j < min)
					min = j;
			}
			cout << "Для " << i << " минимальная цифра - " << min << endl;
		}
		goto Start;
		break;
	}
	case 9:
	{
		system("cls");
		cout << "Задание 9." << endl;
		cout << "Известно количество очков, набранных каждой из 20-ти команд-участниц первенства по футболу. Перечень очков дан в порядке убывания (ни одна пара команд не набрала одинаковое количество очков). Определить, какое место заняла команда, набравшая N очков (естественно, что значение N имеется  в перечне). Условный оператор не использовать." << endl;
		cout << "Решение:" << endl;
		int score[20] = { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6 };
		int n;
		cout << "Введите количество очков команды: ";
		cin >> n;
		for (int i = 0; i <= 20; i++)
		{
			if (n == score[i])
				cout << "Команда с " << n << " очк. заняла " << i + 1 << " место." << endl;
		}
		goto Start;
		break;
	}
	case 10:
	{
		system("cls");
		cout << "Задание 10." << endl;
		cout << "Дано натуральное число  n (n<9999). Найти предпоследнюю цифру числа (в предположении, что n>10)." << endl;
		cout << "Решение:" << endl;
		cout << "Введите число n (10 < n < 9999): ";
		int n;
		cin >> n;
		int x = (n / 10) % 10;
		cout << "Предпоследнее число = " << x << endl;
		goto Start;
		break;
	}
	case 11:
	{
		system("cls");
		cout << "Задание 11." << endl;
		cout << "Даны числа от 1 до 1000 и число m. Вывести все остатки от деления четных сотен на число m." << endl;
		cout << "Решение:" << endl;
		cout << "Введите число m: ";
		int m;
		cin >> m;
		int x = 1;
		for (int i = 1; i <= 1000; i++)
		{

			if (i % 200 == 0 && i % 2 == 0)
			{
				x = i % m;
				cout << "Для " << i << "-" << x << endl;
			}
		}
		goto Start;
		break;
	}
	break;
	}
}