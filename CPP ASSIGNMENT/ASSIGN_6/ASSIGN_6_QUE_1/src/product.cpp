/*
 * product.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "product.h"
#include<iostream>
using namespace std;

product::product() {

	this->price =0;
}
product::product(int price)
{
	this->price=price;
}

int product::getPrice() const {
	return price;
}

void product::setPrice(int price) {
	this->price = price;
}

void product::accept()
{
	cout<<"ENTER PRODUCT PRICE :";
	cin>>this->price;
}
void product::display()
{
	cout<<"PRICE :"<<this->price<<endl;
}

product::~product() {
	// TODO Auto-generated destructor stub
}

