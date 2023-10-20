#include<iostream>
using namespace std;
void add();
void sub();
void mul();
void div();

int a,b,c;
int main()
{
  int ch;
  do
  {
  	cout<<"\npress 1 for addition";
  	cout<<"\npress 2 for substraction";
  	cout<<"\npress 3 for multiplication";
  	cout<<"\npress 4 for division";
  	cout<<"\npress 5 for exit";
  	cout<<"\nenter the choice ";
  	cin>>ch;
  	
  	switch(ch)
  	{
  		case 1:add();break;
  		case 2:sub();break;
  		case 3:mul();break;
  		case 4:div();break;
  	    case 5:break;
  	    default : cout<<"wrong choice";
  		
	}
	
  }
  while(ch!=5);
  
}
void add()
{
cout<<"enter the number ";
cin>>a;
cout<<"enter second number ";
cin>>b;
c=a+b;
cout<<"addition is --> "<<c;
}

void sub()
{cout<<"enter the number ";
cin>>a;
cout<<"enter second number ";
cin>>b;
c=a-b;
cout<<"substraction is --> "<<c;
	}
void mul()
{cout<<"enter the number ";
cin>>a;
cout<<"enter second number ";
cin>>b;
c=a*b;
cout<<"multiplication is --> "<<c;
	}
void div()
{cout<<"enter the number ";
cin>>a;
cout<<"enter second number ";
cin>>b;
c=a/b;
cout<<"division is --> "<<c;
		}		

