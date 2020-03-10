/*
 * product.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

class product {
private:
	int price;
public:
	product();
	product(int price);
	int getPrice() const;
	void setPrice(int price);

	virtual void accept();
	virtual void display();
	virtual int calc_discount()=0;

     virtual ~product();

};

#endif /* PRODUCT_H_ */
