# include<iostream>

using namespace std;

//дл€ заданного массива целых чисел вывести на экран индекс наименьшего четного числа 

const int n = 7;


int main()
{
	setlocale(LC_ALL, "");
	int mas[n] = { 10,9,13,43,-7,4,13};
	//int mas[n] = { 11,9,13,43,-7,3,13};   // нет четного числа
	std::cout << "«аданный массив: " << std::endl;
	int index = 0; //переменна€ подсчета четных элементов
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++)
		std::cout << ' ' << mas[i];
	std::cout << std::endl;
	i = 0;
	int flag = 0;			  // 0-нет четного числа
	int min;				  //минимальный четный элемент массива
	int min_ind = 0;		  //индекс минимальный элемента массива
	for (i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0) // четное число
		{
			min = mas[i];
			flag = 1;       //четный элемент найден
			min_ind = i;    //индекс минимального элемента
			i = n;
		}
	       index++;
	} 
	i = index; // начинаем со следующего после четного числа
	if (flag)
	{
		while (i < n)
		{
			if (mas[i] % 2 == 0) // четное число
				if (mas[i] < min)
				{
					min = mas[i];
					min_ind = i;
				}
			i++;
		}
	}
	else 
		std::cout << "¬ массиве нет четного числа! " << std::endl;
	std::cout << std::endl;
	if (flag)
	{   std::cout << "ћинимальный четного элемент массива: " << min << std::endl;
		std::cout << "»ндекс минимального четного элемента массива: " << min_ind << std::endl;
	}
	return 0;
}