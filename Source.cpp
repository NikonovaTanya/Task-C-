# include<iostream>
# include<cmath>
#include <iomanip>

using namespace std;

//��� ��������� ������� ������������ ����� ������� �� ����� �������� ���������� �������� ������� ����� ����������� ����� 

const int n = 6;


int main()
{
	setlocale(LC_ALL, "");
	double  mas[n] = { 1.67,32.0,3.0,7.12,-4.1,-8.09 };
	//double  mas[n] = { 11.67,32.0,-103.0,7.12,4.0,8.09 };
	std::cout << "�������� ������: " << std::endl;
	int i;
	for (i = 0; i < n; i++)
		std::cout << ' ' <<mas[i];
	std::cout << std::endl;
	double min=mas[0];				      //����������� ������� �������
	i = 1;                            // ������ ������� �������
	while ( i< n)
		{ if (mas[i] < min)
	      {  double tmp = min;
		     min = mas[i];
			 if (min-int(min)== 0)
				 min = tmp;// ����� �����
		}
			i++;
		}
	min = fabs(min);
	double abs_min=min - int(min);
	std::cout << std::endl;
	std::cout << "���������� �������� ������� ����� ����������� �����: " << setprecision(3)<<abs_min << std::endl;
	return 0;
}