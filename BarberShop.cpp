/*
 * BarberShop.cpp
 *
 *  Created on: Nov 3, 2017
 *      Author: Robin
 */

//BarberShop.cpp
#include <iostream>
#include "LinkedStack.h"
#include "Customer.h"
using namespace std;
class BarberShop{
    LinkedStack<Customer> s1;
    LinkedStack<Customer> s2;
    public:
         void addCustomer(Customer&);
         Customer nextCustomer();
};

void BarberShop::addCustomer(Customer& customer){
	Customer temp;
	if (!s1.isEmpty()) {
		s2.push(customer);
		while (!s1.isEmpty()) {
			temp = s1.pop();
			s2.push(temp);
		}
	} else {
		s1.push(customer);
		while (!s2.isEmpty()) {
			temp = s2.pop();
			s1.push(temp);
		}
	}
}

Customer BarberShop::nextCustomer(){
	if (!s1.isEmpty()) {
		return s1.pop();
	} else if (!s2.isEmpty()) {
		return s2.pop();
	} else {
		cout << "The stack is empty." << endl;
	}
}



