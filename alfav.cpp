#include<iostream>

const int n = 20;
using namespace std ;

int main()
{	setlocale(LC_ALL, "");
	char str[]="How many consonant here?";
	std::cout << "������� ������: " << str << std::endl;
	int count = 0;    //���������� �������� ������������ ��������� ���� ��������
	int l = strlen(str); // ����� ������
	int i = 0;
	while (i < l)
	{
		if ((str[i] == 'B') || (str[i] == 'C') || (str[i] == 'D') || (str[i] == 'F')
			|| (str[i] == 'G') || (str[i] == 'H') || (str[i] == 'J') || (str[i] == 'K')
			|| (str[i] == 'L') || (str[i] == 'M') || (str[i] == 'N') || (str[i] == 'P')
			|| (str[i] == 'Q') || (str[i] == 'R') || (str[i] == 'S') || (str[i] == 'T')
			|| (str[i] == 'V') || (str[i] == 'W') || (str[i] == 'X') || (str[i] == 'Y') 
			|| (str[i] == 'Z'))  // ��������� �������������� ������� � ��������� ������� ������
		    	count++;
		if ((str[i] == 'b') || (str[i] == 'C') || (str[i] == 'd') || (str[i] == 'f')
			|| (str[i] == 'g') || (str[i] == 'h') || (str[i] == 'j') || (str[i] == 'k')
			|| (str[i] == 'l') || (str[i] == 'm') || (str[i] == 'n') || (str[i] == 'p')
			|| (str[i] == 'q') || (str[i] == 'r') || (str[i] == 's') || (str[i] == 't')
			|| (str[i] == 'v') || (str[i] == 'w') || (str[i] == 'x') || (str[i] == 'y')
			|| (str[i] == 'z'))  // ��������� �������������� ������� � ��������� ������� ������
			   count++;
	i++;
	}
	std::cout << "���������� ��������� ���� ����������� ��������: " << count << std::endl;
	return 0;
}