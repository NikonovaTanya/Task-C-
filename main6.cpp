# include<iostream>

using namespace std;

//��� ��������� ������� ����� ����� ������� �� ����� ������ ����������� ������� ����� 

const int n = 7;


int main()
{
	setlocale(LC_ALL, "");
	int mas[n] = { 10,9,13,43,-7,4,13};
	//int mas[n] = { 11,9,13,43,-7,3,13};   // ��� ������� �����
	std::cout << "�������� ������: " << std::endl;
	int index = 0; //���������� �������� ������ ���������
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++)
		std::cout << ' ' << mas[i];
	std::cout << std::endl;
	i = 0;
	int flag = 0;			  // 0-��� ������� �����
	int min;				  //����������� ������ ������� �������
	int min_ind = 0;		  //������ ����������� �������� �������
	for (i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0) // ������ �����
		{
			min = mas[i];
			flag = 1;       //������ ������� ������
			min_ind = i;    //������ ������������ ��������
			i = n;
		}
	       index++;
	} 
	i = index; // �������� �� ���������� ����� ������� �����
	if (flag)
	{
		while (i < n)
		{
			if (mas[i] % 2 == 0) // ������ �����
				if (mas[i] < min)
				{
					min = mas[i];
					min_ind = i;
				}
			i++;
		}
	}
	else 
		std::cout << "� ������� ��� ������� �����! " << std::endl;
	std::cout << std::endl;
	if (flag)
	{   std::cout << "����������� ������� ������� �������: " << min << std::endl;
		std::cout << "������ ������������ ������� �������� �������: " << min_ind << std::endl;
	}
	return 0;
}