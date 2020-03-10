/*
 * book.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "product.h"


class book :public product {
private :
	char title[30];
public:
	book();
	book(char* title,int price);

	const char* getTitle() const;
	void setTitle(char * title);

	void accept();
	void display();
	int calc_discount();

	 ~book();
};

#endif /* BOOK_H_ */
