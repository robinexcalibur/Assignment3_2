/*
 * Customer.h
 *
 *  Created on: Nov 1, 2017
 *      Author: Robin
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <iostream>
using namespace std;

class Customer {
	string first, last;
public:
	Customer();
	Customer(string, string);
	string getFirst();
	string getLast();
	string getName();
	void setFirst(string);
	void setLast(string);
	friend ostream& operator<<( ostream&, const Customer&);
};

Customer::Customer() {
	first = last = "";
}

Customer::Customer(string f, string l) {
	first = f;
	last = l;
}

string Customer::getFirst() {
	return first;
}

string Customer::getLast() {
	return last;
}

string Customer::getName() {
	return first + " " + last;
}

void Customer::setFirst(string f) {
	first = f;
}

void Customer::setLast(string l) {
	last = l;
}

ostream& operator<<(ostream& os, const Customer& obj) {
	os<< obj.first << " " << obj.last;
	return os;
}


#endif /* CUSTOMER_H_ */
