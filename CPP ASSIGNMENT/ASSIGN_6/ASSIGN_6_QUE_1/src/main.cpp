
/*1) A shop sells book or tapes. There is 5% discount on tapes,
while 10% discount on books. Assuming that each user purchase
3 products (either book or tape), calculate final bill. The
program should be menu driven and should not cause memory
leakage.*/


#include<iostream>
#include<stdlib.h>
#include"product.h"
#include"tapes.h"
#include"book.h"


using namespace std;
int main()
{
	product* p[3];
	int choice=0;
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n====MENU OPTIONS===="<<endl;
		cout<<"1.BOOK \n2.TAPES"<<endl;
		cout<<"ENTER YOUR CHOICE :";
		cin>>choice;
		cout<<"\n";
		switch(choice)
		{
		case 1:
			p[i]=new book;
			p[i]->accept();
			break;
		case 2:
			p[i]=new tapes;
			p[i]->accept();
			break;
		default:
			cout<<"WRONG INPUT :"<<endl;
			exit (2) ;
		}
	}

	int total_price=0 , total_discount =0, total_discounted_price =0;
	for(int i=0;i<3;i++)
	{
		cout<<"\n";
		p[i]->display();
	}

	for(int i=0;i<3;i++)
	{
		total_price =  total_price + p[i]->getPrice() ;
		total_discount = total_discount + p[i]->calc_discount();
		total_discounted_price = total_discounted_price + (p[i]->getPrice() - p[i]->calc_discount());
	}

	cout<<"\nTOTAL PRICE :"<<total_price<<endl;
	cout<<"TOTAL DISCOUNT :"<<total_discount<<endl;
	cout<<"TOTAL DISCOUNTED PRICE :"<<total_discounted_price<<endl;

	for (int i=0;i<3;i++)
	{
		delete p[i];
	}


	return 0;

}
