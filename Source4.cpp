# include<iostream>
# include<cstring>

using namespace std;


const int n = 100;			//������������ ���������� �������� � ������

// ��� ��������� ������ ������� �� ����� ��� ������ ��� �������� � ������ � ����� ������ � ������� ��� ������ ������� ������� ����� ��������

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
	char SLine[] = "Let's remove redundant spaces there , so all , including this text be happy !";  // ���������� � ������������� ������
	char STmp[n];
	memset(STmp, NULL, n);
	//char SLine[] = "";                         // ���������� � ������������� ������
	char SLine_new[n];							 //����� ������ � ������ ��������
	memset(SLine_new, NULL, n);
	std::cout << "�������� ������: " << SLine << std::endl;
	int l = strlen(SLine); // ����� ������
	int j;
	if (l == 0)
	{
		std::cout << "�������� ������ ������!!!" << std::endl;
		return 0;
	}
	int bflag = 0;                              // 0 - � ����� ��� �����, 1-����
	int i = 0;
	int iNum = 0;								// ���������� ����� ������� � ������ ��������
	int iNum1 = 0;								// ���������� ����� ������� � ������ �����
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
			j = word(SLine, STmp, iNum, l);		// ��������� ����� �� ������ � ���������� ����� �����
			if ()
			STmp[j] = ' ';
			j++;
			copy_str(SLine_new, STmp, iNum1, j);	// �������� ����� � �������������� � ����� ������
			memset(STmp, NULL, n);
			iNum++;									// ������������ �� ������ 
		}
	}
	std::cout << "����� ������:";
	for (i = 0; i < iNum1; i++)
	{
		std::cout << SLine_new[i];

	}
	std::cout << std::endl << std::endl;
	return 0;
}






