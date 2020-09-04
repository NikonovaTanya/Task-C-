# include<iostream>
# include<cstring>
using namespace std;

//
const int n = 60;			//максимальное количество символов в строке

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
// функция выделяет слово из строки line
int word(char* line_str, char *str_tmp, int &index, int len) // выделяем слово из строки
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
	char line[] = " There are too many spaces in this text ! ";  // объявления и инициализация строки
	char line_new[n];							 //новая строка без повторений
	memset(line_new, NULL, n);
	std::cout << "Заданная строка: " << line << std::endl;
	int flag = 1;								 // признак повторения слова. 0 - слово уже встречалось
	int l = strlen(line); // длина строки
	int i = 0;
	int num = 0;								// порядковый номер символа в строке исходной
	int num1 = 0;								// порядковый номер символа в строке новой
	while (num < l)  // пока не конец строки
	{
		char tmp[n];
		memset(tmp, NULL, n);
		int j = word(line, tmp, num, l);			// формирует слово из строки и возвращает длину слова
		if (tmp[j] == '!')
		{
			copy_str(line_new, tmp, num1, j);	 // копирует слово в новую строку
		}
		if ((j == 0) && (num < l))
			j++;
		else
		{
			tmp[j] = ' ';
			j++;
			copy_str(line_new, tmp, num1, j);	 // копирует слово в новую строку
		}        // передвижения по строке 
		num++;
	}
	//удаление лишних пробелов за знаком препинания и после
	l = strlen(line_new);
	std::cout << "Cтрока:";
	for (i = 0; i < l - 3; i++)
	{
		std::cout << line_new[i];
	}
	std::cout << line_new[l-2] << std::endl;
	return 0;
}




