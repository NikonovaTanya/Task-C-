# include<iostream>

using namespace std;


const int n = 30;			//максимальное количество символов в строке

// ƒл€ заданной строки вывести на экран каждое слово в отдельной строке.

//функци€ копирует слово из tmp, в новую строку line_new
void copy_str(char * str1, char * str2, int &index, int  count)  // index- индекс первой буквы последующего слова, count- длина записываемого слова в новую строку
{
	int i = 0;
	while (i < count)
	{
		str1[index] = str2[i];
		index++;
		i++;
	}
	return;
}
//------------------------------------------------------------------------------------------------------------------
//функци€ провер€ет вхождение строки tmp в строку line_new
int strcmp_my(char *str1, char *str2, int l_new, int l_tmp)
{
	int fl = 0;				  //признак полного совпадени€ слова
	if (l_new == 0)			  // если в новой строке нет еще слова, то flag =1- нет повторений
		return 1;
	int i = 0;				 //переменна€ счетчика
	while (i < l_new)
	{
		int j = 0;
		while (str1[i] != ' ') // пока не конец слова, сравниваем его с tmp
		{
			while ((str1[i] == str2[j]) && (j < l_tmp))
			{
				fl += 1;
				i++;
				j++;
			}
			while (str1[i] != ' ')
			{
				i++;		  // переход на следующее слово
			}

		}
		if (fl == l_tmp)	 // слово уже есть в новой строке
			return 0;
		i++;				 //пропуск пробела
	}
	return 1;
}
//----------------------------------------------------------------------------------------------------------------------
// функци€ выдел€ет слово из строки line
int word(char* line_str, char *str_tmp, int &index, int len) // выдел€ем слово из строки
{
	int j = 0; // длина слова
	while (line_str[index] != ' ' &&  index < len)		// формируем слово из строки в tmp;      
	{
		str_tmp[j] = line_str[index];
		j++;
		index++;
	}
	return j;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "");
	//char line[] = "Let's try to print each word in new line";  // объ€влени€ и инициализаци€ строки
	char line[] = "We don't repeat twice twice";
	char line_new[n];							 //нова€ строка без повторений
	memset(line_new, NULL, n);
	std::cout << "«аданна€ строка: " << line << std::endl;
	int flag = 1;								 // признак повторени€ слова. 0 - слово уже встречалось
	int l = strlen(line); // длина строки
	int i = 0;
	int num = 0;								// пор€дковый номер символа в строке исходной
	int num1 = 0;								// пор€дковый номер символа в строке новой
	while (num < l)  // пока не конец строки
	{
		char tmp[n];
		memset(tmp, NULL, n);
		int j = word(line, tmp, num, l);			// формирует слово из строки и возвращает длину слова
		std::cout << "слово: " << tmp << std::endl;
		flag = strcmp_my(line_new, tmp, num1, j);//вызов функции, котора€ провер€ет вхождение строки tmp в строку line_new, 0- слово уже есть в строке
		tmp[j] = ' ';
		j++;
		if (flag == 1)							 //если нет повторени€ слова, то записываем его в новую строку
		{
			copy_str(line_new, tmp, num1, j);	 // копирует неповтор€ющеес€ слово в новую строку
		}
		num++;									 // передвижени€ по строке 
	}
	for (i = 0; i < num1; i++)
	{
		std::cout << line_new[i];

	}
	std::cout << std::endl << std::endl << std::endl;
	//std::cout << "Ќова€ строка:   " << line_new << std::endl;
	return 0;
}





