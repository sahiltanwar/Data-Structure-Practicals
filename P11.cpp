#include<iostream>
using namespace std;

int factorial();
int factIteration();
int factRecursion();
int fact(int);

int factor();
int factorIteration();
int factorRecursion();
int fact1(int);

int main()
{
	int choice;
	char ch;
	do{
		cout<<"\t------------------------------\n";
		cout<<"\t\tSelect your choice\n\n";
		cout<<"\t1. Factorial \n";
		cout<<"\t2. Factor\n";
		cout<<"\t3. Exit\n";
		cout<<"\t------------------------------\n";
	
		cin>>choice;
		cout<<"\n So you want to find a ";
		if(choice==1)
			cout<<"Factorial ";
		if(choice==2)
			cout<<"Factor";
			
		switch(choice)
		{
			case 1 : 
					factorial();
					break;
			case 2 : 
					factor();
					break;
			case 3 : 
					return 0;
			default:
					cout<<"\n\tINVALID INPUT !";
			
		}cout<<"\n\n Do u want to continue (y/n)?";
		cin>> ch;
		cout<<"\n";
	}while(ch=='Y'||ch=='y');
}


/************************ FACTORIAL *******************************/


int factorial()
{
	int op;
	
	cout<<"\n\n\t------------------------------\n";
	cout<<"\t\tSelect an option\n\n";
	cout<<"\t1. Factorial using Iteration\n";
	cout<<"\t2. Factorial using Recursion\n";
	cout<<"\t3. Exit\n";
	cout<<"\t------------------------------\n";
	
	cin>>op;
	cout<<"\n You have select option "<<op<<"\n\n";
	if(op==1)
		cout<<"\t\tFACTORIAL USING ITERATION \n\n ";
	if(op==2)
		cout<<"\t\tFACTORIAL USING RECURSION \n\n ";
	
	switch(op)
	{
		case 1 : 
				factIteration();
				break;
		case 2 : 
				factRecursion();
				break;
		case 3 : 
				return 0;
		default:
				cout<<"\n\tINVALID INPUT !";
			
	}
}
	
	
int factIteration()
{
	int num ;
	cout<<"Enter a number : ";
	cin>>num;
	int fact = 1;
	
	if(num>0)
	{
		for(int i=num; i>0; i--)
		{
			fact = fact*i;
		}
		cout<<"\n Factorial of "<<num<<" is "<<fact;
	}
	else
	{
		cout<<"\n Number must be greater than 0";
	}
	return 0;
}


int factRecursion()
{
	int num ;
	cout<<"Enter a number : ";
	cin>>num;
	if(num>0)
		cout<<" Factorial of "<<num<<" is "<<fact(num);
	else
		cout<<"\n Number must be greater than 0";
	return 0;
}
int fact(int num)
{
	if(num>0)
	{
		return(num*fact(num-1));
	}
	else
	{
		return 1;
	}
}


/************************ FACTOR *******************************/

int factor()
{
	int op;
		
	cout<<"\t------------------------------\n";
	cout<<"\t\tSelect an option\n\n";
	cout<<"\t1. Factor using Iteration\n";
	cout<<"\t2. Factor using Recursion\n";
	cout<<"\t3. Exit\n";
	cout<<"\t------------------------------\n";
	
	cin>>op;
	cout<<"\n You have select option "<<op<<"\n\n";
	if(op==1)
		cout<<"\t\tFACTOR USING ITERATION \n\n ";
	if(op==2)
		cout<<"\t\tFACTOR USING RECURSION \n\n ";

	switch(op)
	{
		case 1 : 
				factorIteration();
				break;
		case 2 : 
				factorRecursion();
				break;
		case 3 : 
				return 0;
		default:
				cout<<"\n\tINVALID INPUT !\n";
		
	}
}


int factorIteration()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<" Factor of "<<num<<" are ";
	for(int i=1; i<=num; ++i)
	{
		if(num%i==0)
			cout<< i <<" ";
	}
}


int factorRecursion()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	fact1(num);
	
	return 0;
}
int fact1(int num)
{
	cout<<" Factor of "<<num <<" are ";
	for(int i=1; i<=num; ++i)
	{
		if(num%i==0)
			cout<< i <<" ";
	}
}
