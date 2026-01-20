#include <iostream>
#include<cmath>
#include<conio.h>//ghadi tkhaadm lina getch();

using namespace std;

void addition ();
void subtraction ();
void multiplication ();
void division ();
void squaring ();
void squareroot ();
void even();
void power();
void tableofcontents ();
void Determinant ();
int main()

{
	int operation;
	do
	{
		cout<<"\n press any key to start The Program !  "<<endl<<endl;
		getch();
		cout<<"select the the opearation using  your keybord :  "<<endl;
		cout<<"\n1-addition "
		    "\n2-subtraction"
		    "\n3-multiplication "
		    "\n4-division"
		    "\n5-squaring "
		    "\n6-square root"
		    "\n7-even or not "
		    "\n8-power "
		    "\n9-tableofcontents "
		    "\n10-Determinant "
		    "\n11-exit "<<endl;
		cout<<"================================="<<endl;
		cout<<" choose A number :";
		cin>>operation;
		cout<<"================================="<<endl;



		switch(operation)
		{
		case 1 :
			addition ();
			break ;

		case 2 :
			subtraction ();
			break ;
		case 3 :
			multiplication ();
			break ;
		case 4 :
			division ();
			break ;
		case 5 :
			squaring ();
			break ;
		case 6 :
			squareroot ();
			break ;
		case 7 :
			even ();
			break ;
		case 8 :
			power();
			break;
		case 9 :
			tableofcontents();
			break ;
		case 10 :
			Determinant();
			break ;
		case 11:
			exit(0);



		}

	} while (operation != 11);


	return 0;
}
void addition ()
{
	int num_of_numbers;
	float num, sum=0;
	cout<<"how many number you wanna  to add ? "<<endl;
	cout<<"================================="<<endl;
	cin>>num_of_numbers;
	cout<<"================================="<<endl;
	for (int i =1 ; i <= num_of_numbers  ; i++)

	{
		cout<< "enter Number "<< i<<":"<<endl;
		cin>>num;
		sum+=num;
	}
	cout<<"================================="<<endl;
	cout<<"the summ of this number is "<<sum<<endl;
}

void subtraction ()
{
	float num1,num2,resultat;
	cout<<"enter the first number : "<<endl;
	cin>>num1;
	cout<<"enter the second number : "<<endl;
	cin>>num2;


	resultat = num1 - num2 ;
	cout<<"================================="<<endl;
	cout<<"the subtraction of  "<<num1<<"   -  "<<num2
	    << "   =   "<<resultat << endl;
	cout<<"================================="<<endl;
}

void multiplication ()
{
	float num1;
	int num_or_numbers;
	int pro=1;

	cout<<"how many name you want to multpiler ";
	cin>>num_or_numbers;


	for(int i = 1 ; i <= num_or_numbers ; i++)
	{
		cout<<"Enter number " <<i<<":  "<<endl;
		cin>>num1;
		pro=pro * num1;
	}
	cout<<"================================="<<endl;
	cout<<" the multipication of  "<<num_or_numbers <<"  number = "<<pro<<endl;
	cout<<"================================="<<endl;

}

void division ()
{
	float num1,num2,resultat;
	cout<<"enter the first number : "<<endl;
	cin>>num1;
	cout<<"enter the second number : "<<endl;
	cin>>num2;
	if (num2 == 0)
	{

		cout<<"================================="<<endl;
		cout<<"divsion by 0 is incorrect !! "<<endl;
		cout<<"================================="<<endl;

	}
	else
	{
		resultat = num1 / num2 ;
		cout<<"================================="<<endl;
		cout<<"the division of  "<<num1<<"   /  "<<num2
		    << "   =   "<<resultat << endl;
		cout<<"================================="<<endl;
	}

}

void squaring ()
{
	float num1,resultat;
	cout<<"enter the  number : "<<endl;
	cin>>num1;



	resultat = num1 * num1 ;
	cout<<"================================="<<endl;
	cout<<"the squre of  "<<num1<<"  = "<<resultat << endl;
	cout<<"================================="<<endl;

}

void squareroot ()
{
	float num1,resultat;
	cout<<"enter the  number : "<<endl;
	cin>>num1;



	resultat = sqrt(num1) ;
	cout<<"================================="<<endl;
	cout<<"the squareroot  of  "<<num1<<"  =  "<<resultat << endl;
	cout<<"================================="<<endl;

}

void even()
{
	int num;
	cout <<"Enter the number you want ti cheek even or not : "<<endl;
	cin>>num;
	if (num % 2==0)
	{
		cout<<"================================="<<endl;
		cout << num << " is an even number." <<endl;
		cout<<"================================="<<endl;
	}
	else
	{
		cout<<"================================="<<endl;
		cout << num << " is an odd number." <<endl;
		cout<<"================================="<<endl;
	}

}

void power()
{
	float num,power;
	cout<<"Enter the number : ";
	cin>>num;
	cout<<"Enter the power " ;
	cin>>power;

	cout<<"================================="<<endl;
	cout<< num <<" ^ "<<power<<"  =  "<< pow(num, power)   <<endl;
	cout<<"================================="<<endl;
}

void tableofcontents ()
{
	void table_numbers();
	void table_string();
	int choise ;

	do
	{
		cout<<"Enter the type of data :"
		    "\n1-integers "
		    "\n2-strings "
		    "\n3-Exit \n";
		cout<<"Enter your choise ";
		cin>>choise;

		switch(choise)
		{
		case 1:
			table_numbers();
			break ;


		case 2 :
			table_string();
			break;
		case 3:

			main();
			break;

		default :
			cout<<"Enter invalid number : \n";
			tableofcontents();
			break ;

		}


	} while (choise!=3);

}

void table_numbers()
{
	int numofnumbers;
	cout<<"Enter the number of numbers  :"<<endl;
	cin>>numofnumbers;
	float numbers[numofnumbers];


	for (int i = 1 ; i <= numofnumbers ; i++ )
	{
		cout<<"Enter number " <<i<<endl;
		cin>>numbers[i-1];
	}

	cout<<"Table of numbers "
	    "\n---------------------"<<endl;
	for (int i = 0 ; i < numofnumbers ; i++)
		cout << "- "<<numbers[i]<<endl;

}

void table_string()
{
	int numofstring;
	cout<<"Enter the number of numbers  :"<<endl;
	cin>>numofstring;
	float String[numofstring];


	for (int i = 0 ; i <= numofstring ; i++ )
	{
		cout<<"Enter string " <<i<<endl;
		cin>>String[i-1];
	}

	cout<<"Table of string "
	    "\n---------------------"<<endl;
	for (int i = 0 ; i <= numofstring ; i++)
		cout << i+1 << "- "<<String[i]<<endl;

}

void Determinant ()
{
	void determinant_2D();
	void determinant_3D();
	int choise;
	cout<<"deteerminte whther 2D or 3D :  "
	    "\n 1-2D"
	    "\n 2-3D\n";
	cout<<"choise a number :  \n ";
	cin>>choise;
	switch (choise)
	{

	case 1 :
		determinant_2D();
		break ;
	case 2:
		determinant_3D();
		break ;
	default :
		cout<<"Enter a listed number !";
		Determinant ();
		break ;
	}

}

void determinant_2D ()
{
	float elem1,elem2,elem3,elem4,reultat;
	cout<<"Enter the first row "
	    "\n first row :";
	cin>>elem1;
	cout<<"\n second row :";
	cin>>elem2;

	cout<<"Enter the first row "
	    "\n first row :";
	cin>>elem3;
	cout<<"\n second row :";
	cin>>elem4;

	reultat= ((elem1*elem4) - (elem2 * elem3));
	cout<<"  |  "<<elem1 <<"  "<<elem2<<"  |  \n";
	cout<<"  |  "<<elem1 <<"  "<<elem2<<"  |  ";
	cout<<"  =  "<<reultat ;

}

void determinant_3D()
{
	float elem1,elem2,elem3,elem4,elem5,elem6,elem7,elem8,elem9;
	float x,y,z;
	cout<<"\nEnter the first row ! \n"<<endl;
	cout<<"Enter the element number 1 : "<<endl;
	cin>>elem1;
	cout<<"Enter the element number 2 : "<<endl;
	cin>>elem2;
	cout<<"Enter the element number 3 : "<<endl;
	cin>>elem3;

	cout<<"\nEnter the second row ! \n"<<endl;

	cout<<"Enter the element number 4 : "<<endl;
	cin>>elem4;
	cout<<"Enter the element number 5 : "<<endl;
	cin>>elem5;
	cout<<"Enter the element number 6 : "<<endl;
	cin>>elem6;

	cout<<"\nEnter the thirth row ! \n"<<endl;

	cout<<"Enter the element number 7 : "<<endl;
	cin>>elem7;
	cout<<"Enter the element number 8 : "<<endl;
	cin>>elem8;
	cout<<"Enter the element number 9 : "<<endl;
	cin>>elem9;
	
	cout<<"  |  "<<elem1<<"  "<<elem2<<"  "<<elem3<<"  |  "<<endl;
	cout<<"  |  "<<elem4<<"  "<<elem5<<"  "<<elem6<<"  |  "<<endl;
	cout<<"  |  "<<elem7<<"  "<<elem8<<"  "<<elem9<<"  |  "<<endl;
	
	x=elem1 * ((elem5 * elem9)-(elem8 *elem6));
	y= -elem2 * ((elem4 * elem9)-(elem7 *elem6));
	z= elem3 * ((elem4 * elem8)-(elem7 *elem5));
	cout<<"================================="<<endl;
	cout<<"  =  "<<x+y+z<<endl;
	cout<<"================================="<<endl;

}


