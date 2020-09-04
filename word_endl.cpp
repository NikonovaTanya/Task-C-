# include<iostream>

using namespace std;


const int n = 30;			//������������ ���������� �������� � ������

// ��� �������� ������ ������� �� ����� ������ ����� � ��������� ������.

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
//������� ��������� ��������� ������ tmp � ������ line_new
int strcmp_my(char *str1, char *str2, int l_new, int l_tmp)
{
	int fl = 0;				  //������� ������� ���������� �����
	if (l_new == 0)			  // ���� � ����� ������ ��� ��� �����, �� flag =1- ��� ����������
		return 1;
	int i = 0;				 //���������� ��������
	while (i < l_new)
	{
		int j = 0;
		while (str1[i] != ' ') // ���� �� ����� �����, ���������� ��� � tmp
		{
			while ((str1[i] == str2[j]) && (j < l_tmp))
			{
				fl += 1;
				i++;
				j++;
			}
			while (str1[i] != ' ')
			{
				i++;		  // ������� �� ��������� �����
			}

		}
		if (fl == l_tmp)	 // ����� ��� ���� � ����� ������
			return 0;
		i++;				 //������� �������
	}
	return 1;
}
//----------------------------------------------------------------------------------------------------------------------
// ������� �������� ����� �� ������ line
int word(char* line_str, char *str_tmp, int &index, int len) // �������� ����� �� ������
{
	int j = 0; // ����� �����
	while (line_str[index] != ' ' &&  index < len)		// ��������� ����� �� ������ � tmp;      
	{
		str_tmp[j] = line_str[index];
		j++;
		index++;
	}
	return j;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "");
	//char line[] = "Let's try to print each word in new line";  // ���������� � ������������� ������
	char line[] = "We don't repeat twice twice";
	char line_new[n];							 //����� ������ ��� ����������
	memset(line_new, NULL, n);
	std::cout << "�������� ������: " << line << std::endl;
	int flag = 1;								 // ������� ���������� �����. 0 - ����� ��� �����������
	int l = strlen(line); // ����� ������
	int i = 0;
	int num = 0;								// ���������� ����� ������� � ������ ��������
	int num1 = 0;								// ���������� ����� ������� � ������ �����
	while (num < l)  // ���� �� ����� ������
	{
		char tmp[n];
		memset(tmp, NULL, n);
		int j = word(line, tmp, num, l);			// ��������� ����� �� ������ � ���������� ����� �����
		std::cout << "�����: " << tmp << std::endl;
		flag = strcmp_my(line_new, tmp, num1, j);//����� �������, ������� ��������� ��������� ������ tmp � ������ line_new, 0- ����� ��� ���� � ������
		tmp[j] = ' ';
		j++;
		if (flag == 1)							 //���� ��� ���������� �����, �� ���������� ��� � ����� ������
		{
			copy_str(line_new, tmp, num1, j);	 // �������� ��������������� ����� � ����� ������
		}
		num++;									 // ������������ �� ������ 
	}
	for (i = 0; i < num1; i++)
	{
		std::cout << line_new[i];

	}
	std::cout << std::endl << std::endl << std::endl;
	//std::cout << "����� ������:   " << line_new << std::endl;
	return 0;
}





