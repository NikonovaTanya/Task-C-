# include<iostream>

using namespace std;


const int n = 40;			//максимальное количество символов в строке

// Для заданной строки вывести на экран каждое слово в отдельной строке.

//----------------------------------------------------------------------------------------------------------------------
// функция выделяет слово из строки SLine
int word(char* SLine_str, char *sStrTmp, int &index, int len) // выделяем слово из строки
{
	int j = 0; // длина слова
	while (SLine_str[index] != ' ' &&  index < len)		// формируем слово из строки в sTmp;      
	{
		sStrTmp[j] = SLine_str[index];
		j++;
		index++;
	}
	return j;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "");
	char SLine[] = "Let's try to print each word in new line";  // объявления и инициализация строки
	std::cout << "Заданная строка: " << SLine << std::endl;
	int l = strlen(SLine); // длина строки
	int i = 0;
	int num = 0;								// порядковый номер символа в строке исходной
	while (num < l)  // пока не конец строки
	{
		char sTmp[n];
		memset(sTmp, NULL, n);
		int j = word(SLine, sTmp, num, l);			// формирует слово из строки и возвращает длину слова
		std::cout << " "<< sTmp << std::endl;
		j++;
		num++;									 // передвижения по строке 
	}
	return 0;
}





