#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

void main()
{
Start:
	setlocale(LC_ALL, "Rus");
	int zadanie;
	cout << "������� ����� �������: ";
	cin >> zadanie;
	switch (zadanie)
	{

	case 1:
	{
		system("cls");
		cout << "������� 1." << endl;
		cout << "��� ��������� n � ����� ����� ��������� n! � n2." << endl;
		cout << "�������:" << endl;
		int n;
		int fak = 1;
		cout << "������� ����� n: ";
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
		cout << "������� 2." << endl;
		cout << "������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����." << endl;
		cout << "�������:" << endl;
		int N, max, j, k = 0;
		cout << "������� ����� N: ";
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
			cout << "��� " << i << " ������������ ����� - " << max << endl;
		}
		goto Start;
		break;
	}
	case 3:
	{
		system("cls");
		cout << "������� 3." << endl;
		cout << "������ ����������� ����� �� 10 �� N. ��� ������������ ����� ����� ������ ����� � ����� ��� ����." << endl;
		cout << "�������:" << endl;
		int N, sum, j, k = 0;
		cout << "������� ����� N: ";
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
			cout << "��� " << i << " ������ ����� - " << j << ", ����� ���� - " << sum << endl;
		}
		goto Start;
		break;
	}
	case 4:
	{
		system("cls");
		cout << "������� 4." << endl;
		cout << "����������, �������� �� ����� ����� ������������, �. �. ����� ������, ������� ��������� �������� ����� ������� � ������ ������ (���������, ����������). ��������, ����� 123321, 202, 9889, 5555." << endl;
		cout << "�������:" << endl;
		int N, n, K = 0, k, N1 = 0, N2 = 0, N12, N22, i = 0, z, y;
		cout << "������� �����: ";
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
				cout << "����� " << N << " - ���������." << endl;
			else
				cout << "����� " << N << " - �� ���������." << endl;
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
				cout << "����� " << N << " - ���������." << endl;
			else
				cout << "����� " << N << " - �� ���������." << endl;
		}
		goto Start;
		break;
	}
	case 5:
	{
		system("cls");
		cout << "������� 5." << endl;
		cout << "������� ����� ��������� ����� �� 12 �� 80 �� 1- ����� � ������." << endl;
		cout << "�������:" << endl;
		int i1;
		int i2;
		for (int i = 12; i <= 80; i++)
		{
			i1 = i / 10;
			i2 = i % 10;
			cout << "��� " << i << " = " << ((i1*i1) + (i2*i2)) << endl;
		}
		goto Start;
		break;
	}
	case 6:
	{
		system("cls");
		cout << "������� 6." << endl;
		cout << "������� �������� ��������� ����� �� 22 �� 88 �� 1- ����� � ������." << endl;
		cout << "�������:" << endl;
		int i1;
		int i2;
		for (int i = 12; i <= 80; i++)
		{
			i1 = i / 10;
			i2 = i % 10;
			cout << "��� " << i << " = " << ((i1*i1) - (i2*i2)) << endl;
		}
		goto Start;
		break;
	}
	case 7:
	{
		system("cls");
		cout << "������� 7." << endl;
		cout << "���� ������������ ����� A � ����������� ����� �� 1 �� N (> 0). ����� �������� ��������� A � ����������� ����� N ." << endl;
		cout << "�������:" << endl;
		cout << "������� ������������ ����� �: ";
		float A;
		cin >> A;
		cout << "������� ����� N (> 0): ";
		int N;
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			cout << "��� " << i << " = " << ((A*A) - (i*i)) << endl;
		}
		goto Start;
		break;
	}
	case 8:
	{
		system("cls");
		cout << "������� 8." << endl;
		cout << "������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����." << endl;
		cout << "�������:" << endl;
		int N, min, j, k = 0;
		cout << "������� ����� N: ";
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
			cout << "��� " << i << " ����������� ����� - " << min << endl;
		}
		goto Start;
		break;
	}
	case 9:
	{
		system("cls");
		cout << "������� 9." << endl;
		cout << "�������� ���������� �����, ��������� ������ �� 20-�� ������-�������� ���������� �� �������. �������� ����� ��� � ������� �������� (�� ���� ���� ������ �� ������� ���������� ���������� �����). ����������, ����� ����� ������ �������, ��������� N ����� (�����������, ��� �������� N �������  � �������). �������� �������� �� ������������." << endl;
		cout << "�������:" << endl;
		int score[20] = { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6 };
		int n;
		cout << "������� ���������� ����� �������: ";
		cin >> n;
		for (int i = 0; i <= 20; i++)
		{
			if (n == score[i])
				cout << "������� � " << n << " ���. ������ " << i + 1 << " �����." << endl;
		}
		goto Start;
		break;
	}
	case 10:
	{
		system("cls");
		cout << "������� 10." << endl;
		cout << "���� ����������� �����  n (n<9999). ����� ������������� ����� ����� (� �������������, ��� n>10)." << endl;
		cout << "�������:" << endl;
		cout << "������� ����� n (10 < n < 9999): ";
		int n;
		cin >> n;
		int x = (n / 10) % 10;
		cout << "������������� ����� = " << x << endl;
		goto Start;
		break;
	}
	case 11:
	{
		system("cls");
		cout << "������� 11." << endl;
		cout << "���� ����� �� 1 �� 1000 � ����� m. ������� ��� ������� �� ������� ������ ����� �� ����� m." << endl;
		cout << "�������:" << endl;
		cout << "������� ����� m: ";
		int m;
		cin >> m;
		int x = 1;
		for (int i = 1; i <= 1000; i++)
		{

			if (i % 200 == 0 && i % 2 == 0)
			{
				x = i % m;
				cout << "��� " << i << "-" << x << endl;
			}
		}
		goto Start;
		break;
	}
	break;
	}
}