# include<iostream>
# include<cstring>

using namespace std;


const int n = 100;			//максимальное количество символов в строке

// Для задданной строки вывести на экран эту строку без пробелов в начале и конце строки и заменив все подряд стоящие пробелы одним пробелом

//функция копирует слово из tmp, в новую строку line_new
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
// функция выделяет слово из строки SLine
int word(char* SLineStr, char * LStrTmp, int &index, int nLen) // выделяем слово из строки
{
	int j = 0; // длина слова
	while (SLineStr[index] != ' ' &&  index < nLen)		// формируем слово из строки в tmp;      
	{
		LStrTmp[j] = SLineStr[index];
		j++;
		index++;
	}
	return j;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "");
	char SLine[] = "Let's remove redundant spaces there , so all , including this text be happy !";  // объявления и инициализация строки
	char STmp[n];
	memset(STmp, NULL, n);
	//char SLine[] = "";                         // объявления и инициализация строки
	char SLine_new[n];							 //новая строка в нижнем регистре
	memset(SLine_new, NULL, n);
	std::cout << "Заданная строка: " << SLine << std::endl;
	int l = strlen(SLine); // длина строки
	int j;
	if (l == 0)
	{
		std::cout << "Заданная строка пустая!!!" << std::endl;
		return 0;
	}
	int bflag = 0;                              // 0 - в слове нет цифры, 1-есть
	int i = 0;
	int iNum = 0;								// порядковый номер символа в строке исходной
	int iNum1 = 0;								// порядковый номер символа в строке новой
	while (iNum < l)
	{
		if (SLine[i] != ' ')
		{
			SLine_new[iNum] = SLine[i];
			iNum++;
			i++;
		}
		else
		{if (S)
		}
			j = word(SLine, STmp, iNum, l);		// формирует слово из строки и возвращает длину слова
			if ()
			STmp[j] = ' ';
			j++;
			copy_str(SLine_new, STmp, iNum1, j);	// копирует слово в нижнемрегистре в новую строку
			memset(STmp, NULL, n);
			iNum++;									// передвижения по строке 
		}
	}
	std::cout << "Новая строка:";
	for (i = 0; i < iNum1; i++)
	{
		std::cout << SLine_new[i];

	}
	std::cout << std::endl << std::endl;
	return 0;
}






