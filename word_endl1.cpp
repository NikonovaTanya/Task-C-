# include<iostream>

using namespace std;


const int n = 40;			//������������ ���������� �������� � ������

// ��� �������� ������ ������� �� ����� ������ ����� � ��������� ������.

//----------------------------------------------------------------------------------------------------------------------
// ������� �������� ����� �� ������ SLine
int word(char* SLine_str, char *sStrTmp, int &index, int len) // �������� ����� �� ������
{
	int j = 0; // ����� �����
	while (SLine_str[index] != ' ' &&  index < len)		// ��������� ����� �� ������ � sTmp;      
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
	char SLine[] = "Let's try to print each word in new line";  // ���������� � ������������� ������
	std::cout << "�������� ������: " << SLine << std::endl;
	int l = strlen(SLine); // ����� ������
	int i = 0;
	int num = 0;								// ���������� ����� ������� � ������ ��������
	while (num < l)  // ���� �� ����� ������
	{
		char sTmp[n];
		memset(sTmp, NULL, n);
		int j = word(SLine, sTmp, num, l);			// ��������� ����� �� ������ � ���������� ����� �����
		std::cout << " "<< sTmp << std::endl;
		j++;
		num++;									 // ������������ �� ������ 
	}
	return 0;
}





