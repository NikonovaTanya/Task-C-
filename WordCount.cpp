# include<iostream>
# include<cstring>

using namespace std;


const int n = 70;			//максимальное количество символов в строке

// Подсчитать количество слов в строке
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
	char SLine[] = "We are trying to count number of words in this text";  // объявления и инициализация строки
	//char SLine[] = "";					// объявления и инициализация строки
	std::cout << "Заданная строка: " << SLine << std::endl;
	int l = strlen(SLine);					// длина строки
	if (l == 0)
	{
		std::cout << "Заданная строка пустая!!!" << std::endl;
		return 0;
	}
	int i = 0;
	int iCount = 0;                            // счетчик для слов
	int iNum = 0;								// порядковый номер символа в строке исходной
	while (iNum < l)
	{
		char STmp[n];
		memset(STmp, NULL, n);
		int j = word(SLine, STmp, iNum, l);			// формирует слово из строки и возвращает длину слова
		iCount++;									
		iNum++;									  // передвижения по строке 
	}
	std::cout << "Количество слов в строке:  "<<iCount;
	std::cout << std::endl << std::endl;
	return 0;
}






