//ІТЕРАЦІЙНИЙ СПОСІБ
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

using namespace std;

int kilkist(char* str);
char* modified(char* str);
void print(const char* x);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char str[201];
	char second[250];

	cout << "Введіть строку: ";
	cin.getline(str, 200); cout << endl;

	cout << "Число входжень в послідовність групи букв 'while': " << kilkist(str) << endl;
	cout << "Модифікована строка: ";
	print(modified(str));


	return 0;
}
int kilkist(char* str)
{
	if (strlen(str) < 5)
		return 0;
	int k = 0;
	for (int i = 0; i < strlen(str); i++)
		if (str[i] == 'w' &&
			str[i + 1] == 'h' &&
			str[i + 2] == 'i' &&
			str[i + 3] == 'l' &&
			str[i + 4] == 'e')
			k++;
	return k;
}
char* modified(char* str)
{
	if (strlen(str) < 5)
		return str;

	char* tmp = new char[strlen(str) * 3 / 5 + 1];
	char* t = tmp;

	tmp[0] = '\0';
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 'w' &&
			str[i + 1] == 'h' &&
			str[i + 2] == 'i' &&
			str[i + 3] == 'l' &&
			str[i + 4] == 'e')
		{
			strcat(t, "***");
			t += 3;
			i += 5;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
void print(const char* x)
{
	int i = 0;
	while(x[i] != '\0')
		cout << x[i++];
}

