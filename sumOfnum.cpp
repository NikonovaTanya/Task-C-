# include<iostream>

using namespace std;

//дл€ заданного массива целых чисел вывести на экран сумму цифр значение наибольшего нечетного числа 

const int n = 7;


int main()
{
	setlocale(LC_ALL, "");
	int mas[n] = { 10,9,13,43,-7,4,13 };
	std::cout << "«аданный массив: " << std::endl;
	int index = 0;                //индекс массива нечетных элементов
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++)
		std::cout << ' ' << mas[i];
	std::cout << std::endl;
	i = 0;
	int flag = 0;			      // 0-нет нечетного числа
	int max;				      //максимальный нечетный элемент массива
	for (i = 0; i < n; i++)
	{
		if (mas[i] % 2 != 0)      // нечетное число
		{
			max = mas[i];
			flag = 1;             //нечетный элемент найден
			index = i;
			i = n;
		}
		index++;
	}
	i = index;                   // начинаем со следующего после нечетного числа
	if (flag)
	{
		while (i < n)
		{
			if (mas[i] % 2 != 0) // нечетное число
				if (mas[i] > max)
				{
					max = mas[i];
				}
			i++;
		}
	}
	else
		std::cout << "¬ массиве нет нечетного числа! " << std::endl;
	std::cout << std::endl;
	if (flag)
	{
		int sum=0;
		while (max != 0)
		{
			sum += max % 10;
			max /= 10;
		}
		std::cout << " " << sum << std::endl;
	}
	return 0;
}