# include<iostream>
# include<cstring>

using namespace std;


const int n = 70;			//������������ ���������� �������� � ������

// ���������� ���������� ���� � ������
//------------------------------------------------------------------------------------------------------------------
// ������� �������� ����� �� ������ SLine
int word(char* SLineStr, char * LStrTmp, int &index, int nLen) // �������� ����� �� ������
{
	int j = 0; // ����� �����
	while (SLineStr[index] != ' ' &&  index < nLen)		// ��������� ����� �� ������ � tmp;      
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
	char SLine[] = "We are trying to count number of words in this text";  // ���������� � ������������� ������
	//char SLine[] = "";					// ���������� � ������������� ������
	std::cout << "�������� ������: " << SLine << std::endl;
	int l = strlen(SLine);					// ����� ������
	if (l == 0)
	{
		std::cout << "�������� ������ ������!!!" << std::endl;
		return 0;
	}
	int i = 0;
	int iCount = 0;                            // ������� ��� ����
	int iNum = 0;								// ���������� ����� ������� � ������ ��������
	while (iNum < l)
	{
		char STmp[n];
		memset(STmp, NULL, n);
		int j = word(SLine, STmp, iNum, l);			// ��������� ����� �� ������ � ���������� ����� �����
		iCount++;									
		iNum++;									  // ������������ �� ������ 
	}
	std::cout << "���������� ���� � ������:  "<<iCount;
	std::cout << std::endl << std::endl;
	return 0;
}






