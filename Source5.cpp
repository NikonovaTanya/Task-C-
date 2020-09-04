# include<iostream>

using namespace std;


const int n = 7;
void printArray(int *m, int n)
{
	std::cout << "Array: " << std::endl;
	for (int i = 0; i < n; i++)
		std::cout << ' ' << *(m + i);
	std::cout << std::endl;
	return ;
}
//--------------------------------------------------------------------------------------------------------------------------
int firstOdd(int *m, int n )    
{   int firstOddel;		
    for (int i = 0; i < n; i++)
	{
		if (*(m+i) % 2 != 0)      
		{
			firstOddel = *(m+i);
			return firstOddel;
		}
	}
	return 0;                      
}
//-----------------------------------------------------------------------------------------------------
int bigOddElement(int *m, int n)
{
	int i = 0;
	int OddEl = firstOdd(m,n);
	if (OddEl)  // 0- no odd number
	{  while (i < n)
	  {
		if (*(m + i) % 2 != 0)
			if (*(m + i) > OddEl)
			{  OddEl =*(m+i);
			}
		 i++;
	  }
	}
	else
	{
		std::cout << "There is no odd number in the array! " << std::endl;
		return 0;
	}

	return OddEl;
}
//--------------------------------------------------------------------------------------------------------
int main()
{
	int mas[n] = { 10,9,13,43,-7,4,13 };
	printArray( mas, n);
	std::cout << "Maximum odd array element: " << bigOddElement(mas, n)<< std::endl;
	return 0;
}
