#include<iostream.h>
#include<stdlib.h>

int main()
{
  system("cls")
  void change(int &);
  int orig = 10;
  cout<<"The original valur is :"<<orig<<"\n";
  change(orig);
  cout<<"value after change() is over:"<<orig<<"\n";
  return 0;	
}
void change(int &a)
{
	a=20;
	cout<<"Value of orig in function change() is :"<<orig<<"\n";
	return;
}
