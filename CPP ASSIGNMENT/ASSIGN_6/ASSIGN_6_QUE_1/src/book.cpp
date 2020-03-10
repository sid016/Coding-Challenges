/*
 * book.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "book.h"
#include "product.h"

#include<cstring>
#include<iostream>
using namespace std;

book::book():product() {

	strcpy(this->title,"");
}
book::book(char * title,int price):product(price)
{
	strcpy(this->title,title);
}

const char* book::getTitle() const {
	return title;
}
void book::setTitle(char * title)
{
	strcpy(this->title,title);
}

void book::accept()
{
	cout<<"ENTER TITLE :";
	cin>>this->title;
	//cin.get(this->title,30);
	this->product::accept();

}
void book::display()
{
	this->product::display();
	cout<<"ENTER TITLE :"<<this->title<<endl;
}

int book::calc_discount()
{
	return this->getPrice() * 0.10;
}



book::~book() {
	// TODO Auto-generated destructor stub
}

