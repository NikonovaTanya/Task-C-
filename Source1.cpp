# include<iostream>
# include<cstring>

using namespace std;


const int n = 20;			//максимальное количество символов в строке

// Для заданной строки вывести на экран эту же строку в верхнем регистре

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
void ConvStrUp(char * STmp, int ilen) // функция переводит слово в нижний регистр
{
	for (int i = 0; i < ilen; i++)
	{
		if (('A' <= STmp[i]) && (STmp[i] <= 'Z'))
			STmp[i] = char(((int)STmp[i]) + 32);   //перевод в нижний регистр
		if (('a' <= STmp[i]) && (STmp[i] <= 'z'))  //перевод в нижний регистр
			STmp[i] = char(((int)STmp[i]) - 32);

	}
	return;
}
//----------------------------------------------------------------------------------------------------------------------
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
	char SLine[] = "This is C++";  // объявления и инициализация строки
	//char SLine[] = "";  // объявления и инициализация строки
	char SLine_new[n];							 //новая строка в нижнем регистре
	memset(SLine_new, NULL, n);
	std::cout << "Заданная строка: " << SLine << std::endl;
	int l = strlen(SLine); // длина строки
	if (l == 0)
	{
		std::cout << "Заданная строка пустая!!!" << std::endl;
		return 0;
	}
	int i = 0;
	int iNum = 0;								// порядковый номер символа в строке исходной
	int iNum1 = 0;								// порядковый номер символа в строке новой
	while (iNum < l)
	{
		char STmp[n];
		memset(STmp, NULL, n);
		int j = word(SLine, STmp, iNum, l);			// формирует слово из строки и возвращает длину слова
		ConvStrUp(STmp, j);                            // функция переводит слово в верхний регистр
		STmp[j] = ' ';
		j++;
		copy_str(SLine_new, STmp, iNum1, j);	       // копирует слово в нижнемрегистре в новую строку
		iNum++;									  // передвижения по строке 
	}
	std::cout << "Новая строка:   ";
	for (i = 0; i < iNum1; i++)
	{
		std::cout << SLine_new[i];

	}
	std::cout << std::endl << std::endl;
	return 0;
}






