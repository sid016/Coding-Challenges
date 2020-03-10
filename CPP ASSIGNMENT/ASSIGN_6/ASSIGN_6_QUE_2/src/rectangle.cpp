/*
 * rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "rectangle.h"
#include<iostream>
using namespace std;

rectangle::rectangle() {
	this->length=0;
	this->breadth=0;
}

rectangle::rectangle(float length,float breadth)
{
	this->length = length;
	this->breadth=breadth;
}
float rectangle::get_length()
{
	return this->length;
}
void rectangle::set_length(float length)
{
	this->length=length;
}
float rectangle::get_breadth()
{
	return this->breadth;
}
void rectangle::set_breadth(float breadth)
{
	this->breadth=breadth;
}
void rectangle::accept()
{
	cout<<"ENTER length OF rectangle :";
	cin>>this->length;
	cout<<"ENTER breadth OF rectangle :";
	cin>>this->breadth;
}
void rectangle::display()
{
	cout<<"length OF rectangle IS :"<<this->length<<endl;
	cout<<"breadth OF rectangle IS :"<<this->breadth<<endl;

}
float rectangle::calc_area()
{
	return this->length*this->breadth;
}
float rectangle::calc_peri()
{
	return 2*(this->length+this->breadth);
}

rectangle::~rectangle() {
	// TODO Auto-generated destructor stub
}

