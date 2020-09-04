# include <iostream.h>
# include <conio.h>
//using namespace std;

const int n=6;

// Kto zdes celiy
int main()
{ //setlocale(LC_ALL, "");
  float  mas[]={1.67,32.0,3.0,7.12,-4.1,-8.0};
  cout<<"Zadaniy masiv: "<<endl;
  for(int i=0;i<n;i++)
  {   cout<<"  "<<mas[i];
  }
  cout<<endl;
  int count=0;
  for (i=0;i<n;i++)
  { if ((mas[i]-int(mas[i]))==0)
    { count++;
    }
  }
  cout<<"Kolichestvo wtlih chisel v masive: "<<count<<endl;
  getch();
  return 0;
}