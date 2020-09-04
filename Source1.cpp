# include<iostream>
# include<cstring>

using namespace std;


const int n = 20;			//������������ ���������� �������� � ������

// ��� �������� ������ ������� �� ����� ��� �� ������ � ������� ��������

//������� �������� ����� �� tmp, � ����� ������ line_new
void copy_str(char * str1, char * str2, int &index, int  count)  // index- ������ ������ ����� ������������ �����, count- ����� ������������� ����� � ����� ������
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
void ConvStrUp(char * STmp, int ilen) // ������� ��������� ����� � ������ �������
{
	for (int i = 0; i < ilen; i++)
	{
		if (('A' <= STmp[i]) && (STmp[i] <= 'Z'))
			STmp[i] = char(((int)STmp[i]) + 32);   //������� � ������ �������
		if (('a' <= STmp[i]) && (STmp[i] <= 'z'))  //������� � ������ �������
			STmp[i] = char(((int)STmp[i]) - 32);

	}
	return;
}
//----------------------------------------------------------------------------------------------------------------------
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
	char SLine[] = "This is C++";  // ���������� � ������������� ������
	//char SLine[] = "";  // ���������� � ������������� ������
	char SLine_new[n];							 //����� ������ � ������ ��������
	memset(SLine_new, NULL, n);
	std::cout << "�������� ������: " << SLine << std::endl;
	int l = strlen(SLine); // ����� ������
	if (l == 0)
	{
		std::cout << "�������� ������ ������!!!" << std::endl;
		return 0;
	}
	int i = 0;
	int iNum = 0;								// ���������� ����� ������� � ������ ��������
	int iNum1 = 0;								// ���������� ����� ������� � ������ �����
	while (iNum < l)
	{
		char STmp[n];
		memset(STmp, NULL, n);
		int j = word(SLine, STmp, iNum, l);			// ��������� ����� �� ������ � ���������� ����� �����
		ConvStrUp(STmp, j);                            // ������� ��������� ����� � ������� �������
		STmp[j] = ' ';
		j++;
		copy_str(SLine_new, STmp, iNum1, j);	       // �������� ����� � �������������� � ����� ������
		iNum++;									  // ������������ �� ������ 
	}
	std::cout << "����� ������:   ";
	for (i = 0; i < iNum1; i++)
	{
		std::cout << SLine_new[i];

	}
	std::cout << std::endl << std::endl;
	return 0;
}






