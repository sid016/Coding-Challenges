/*
 * circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "circle.h"
#include<iostream>
using namespace std;

circle::circle() {
	this->radius=0;
}

circle::circle(float radius)
{
	this->radius = radius;
}
float circle::get_radius()
{
	return this->radius;
}
void circle::set_radius(float radius)
{
	this->radius=radius;
}
void circle::accept()
{
	cout<<"ENTER RADIUS OF CIRCLE :";
	cin>>this->radius;
}
void circle::display()
{
	cout<<"RADIUS OF CIRCLE IS :"<<this->radius;
}
float circle::calc_area()
{
	return 3.14*this->radius*this->radius;
}
float circle::calc_peri()
{
	return 3.14*2*this->radius;
}

circle::~circle() {
	// TODO Auto-generated destructor stub
}

