# include<iostream>
# include<cstring>

using namespace std;


const int n = 100;			//������������ ���������� �������� � ������
// ��� �������� ������ ������� �� ����� ������, ������� ����� �� 1 �� 10 ��������������� ������

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
int numeral(char * LStrTmp, int iKol)                // �������� �� ������� �����, ch-������ � ���� �����
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
	char SLine[] = "I completed 7 tasks and 2 had difficulties with just 1 of them 2";  // ���������� � ������������� ������
	//char SLine[] = "10";
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
		j = word(SLine, STmp, iNum, l);		// ��������� ����� �� ������ � ���������� ����� �����
		if (j == 1)                               // 1 - � ����� ���� ������, �������� �����
		{// �������� -���� �� � ����� �����
			j -= 1;
			bflag = numeral(STmp, j);                // �������� �� ������� �����, ch-������ � ���� �����
			if (bflag)                                  // ���� �����, �� ��������� �� � �����
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
			{	SLine_new[j] = STmp[j];  // ������� ������ ����� �� ����� ��������� ������ � 
				j++;
			}
		}
		STmp[j] = ' ';
		j++;
		copy_str(SLine_new, STmp, iNum1, j);	// �������� ����� � �������������� � ����� ������
		memset(STmp, NULL, n);
		iNum++;									// ������������ �� ������ 
	}
	std::cout << "����� ������:";
	for (i = 0; i < iNum1; i++)
	{
		std::cout << SLine_new[i];

	}
	std::cout << std::endl << std::endl;
	return 0;
}






