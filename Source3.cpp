# include<iostream>
# include<cstring>
using namespace std;

//
const int n = 60;			//������������ ���������� �������� � ������

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
	char line[] = " There are too many spaces in this text ! ";  // ���������� � ������������� ������
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
		if (tmp[j] == '!')
		{
			copy_str(line_new, tmp, num1, j);	 // �������� ����� � ����� ������
		}
		if ((j == 0) && (num < l))
			j++;
		else
		{
			tmp[j] = ' ';
			j++;
			copy_str(line_new, tmp, num1, j);	 // �������� ����� � ����� ������
		}        // ������������ �� ������ 
		num++;
	}
	//�������� ������ �������� �� ������ ���������� � �����
	l = strlen(line_new);
	std::cout << "C�����:";
	for (i = 0; i < l - 3; i++)
	{
		std::cout << line_new[i];
	}
	std::cout << line_new[l-2] << std::endl;
	return 0;
}




