# include<iostream>
# include<cstring>

using namespace std;


const int n = 100;			//максимальное количество символов в строке
// Для заданной строки вывести на экран строку, заменив числа от 1 до 10 соответствующим словом

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
int numeral(char * LStrTmp, int iKol)                // проверка на наличия цифры, ch-символ в виде цифры
{
	if ((LStrTmp[iKol]<='9') && (LStrTmp[iKol] >= '1'))
		return 1;
	else
		return 0;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "");
	char SLine[] = "I completed 7 tasks and 2 had difficulties with just 1 of them 2";  // объявления и инициализация строки
	//char SLine[] = "10";
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
		j = word(SLine, STmp, iNum, l);		// формирует слово из строки и возвращает длину слова
		if (j == 1)                               // 1 - в слове один символ, возможно цифра
		{// проверка -есть ли в слове цифра
			j -= 1;
			bflag = numeral(STmp, j);                // проверка на наличия цифры, ch-символ в виде цифры
			if (bflag)                                  // если цифра, то переведем ее в слово
			{
				{
					char ch = STmp[j];
					switch (ch)
					{
					case '1': { STmp[0] = 'o';
								STmp[1] = 'n';
								STmp[2] = 'e';
								j=3; break;
						      }; 
					case '2': {	STmp[0] = 't';
						       STmp[1] = 'w';
						       STmp[2] = 'o';
						       j = 3; break;
					          };
					case '3': {	STmp[0] = 't';
								STmp[1] = 'h';
								STmp[2] = 'r';
								STmp[3] = 'e';
								STmp[4] = 'e';
								j = 5; break;
						      }; 
					case '4': {	STmp[0] = 'f';
						STmp[1] = 'o';
						STmp[2] = 'u';
						STmp[3] = 'r';
						j = 4; break;
					};
					case '5': {	STmp[0] = 'f';
						STmp[1] = 'i';
						STmp[2] = 'v';
						STmp[3] = 'e';
						j = 4; break;
					};
					case '6': {	STmp[0] = 's';
						STmp[1] = 'i';
						STmp[2] = 'x';
						j = 3; break;
					};
					case '7': {	STmp[0] = 's';
						STmp[1] = 'e';
						STmp[2] = 'v';
						STmp[3] = 'e';
						STmp[4] = 'n';
						j = 5; break;
					};
					case '8': {	STmp[0] = 'e';
						STmp[1] = 'i';
						STmp[2] = 'g';
						STmp[3] = 'h';
						STmp[4] = 't';
						j = 5; break;
					};
					case '9': {	STmp[0] = 'n';
						STmp[1] = 'i';
						STmp[2] = 'n';
						STmp[3] = 'e';
						j = 4; break;
					};
					default: break;
					}

				}
            }
			if (iNum1 == 0 && !bflag)
			{	SLine_new[j] = STmp[j];  // копирую первое слово из одной буквновую строку в 
				j++;
			}
		}
		STmp[j] = ' ';
		j++;
		copy_str(SLine_new, STmp, iNum1, j);	// копирует слово в нижнемрегистре в новую строку
		memset(STmp, NULL, n);
		iNum++;									// передвижения по строке 
	}
	std::cout << "Новая строка:";
	for (i = 0; i < iNum1; i++)
	{
		std::cout << SLine_new[i];

	}
	std::cout << std::endl << std::endl;
	return 0;
}






