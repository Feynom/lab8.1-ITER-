//ІТЕРАЦІЙНИЙ СПОСІБ
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

using namespace std;

int kilkist(char* str);
void modified(char* str);
void print(char* str);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char str[201];

	cout << "Введіть строку: ";
	cin.getline(str, 200); cout << endl;

	cout << "Число входжень в послідовність групи букв 'while': " << kilkist(str) << endl;
	cout << "Модифікована строка: ";
	modified(str);
	print(str);


	return 0;
}
int kilkist(char* str)
{
	if (strlen(str) < 5)
		return 0;
	int k = 0;
	for (int i = 0; i < strlen(str); i++)
		if (str[i] == 'w')
			if (str[i + 1] == 'h')
				if (str[i + 2] == 'i')
					if (str[i + 3] == 'l')
						if (str[i + 4] == 'e')
							k++;
	return k;
}
void modified(char* str)
{
	if (strlen(str) < 5)
		for (int f = 0; f < strlen(str); f++)
			cout << str[f];
	int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == 'w')
			if (str[i + 1] == 'h')
				if (str[i + 2] == 'i')
					if (str[i + 3] == 'l')
						if (str[i + 4] == 'e')
						{
							str[i] = '*';
							str[i + 1] = '*';
							str[i + 2] = '*';
							i += 3;
							int f = i;
							for (f; f < strlen(str); f++)
								str[i] = str[i + 2];
							i += 2;
						}
}
void print(char* str)
{
	//if(kilkist(str) != 0)
		for (int i = 0; i < strlen(str); i++)
			cout << str[i];
}

