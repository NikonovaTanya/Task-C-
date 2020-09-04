# include<iostream>

using namespace std;

//подсчитать сумму нечетных чисел в заданном массиве целых чисел

const int n = 7;


int main()
{
	setlocale(LC_ALL, "");
	int mas[n] = { 1,78,5,34,7,-4,-13 };
	//int mas[n] = { 2,78,6,34,8,-4,-14 };
	std::cout << "Заданный массив: " << std::endl;
	int i = 0;
	int flag = 0; // нет нечетных чисел
	int sum = 0;
	for (i = 0; i < n; i++)
		std::cout << ' ' << mas[i];
	std::cout << std::endl;
	for (i = 0; i < n; i++)
	{
		if (mas[i] % 2 != 0)
		{
			sum += mas[i];
			flag = 1;
		}
	}
	if (flag)
	  std::cout << "Сумма нечетных чисел: " << sum << std::endl;
	else
	  std::cout << "Все числа четные!" << std::endl;
	return 0;
}