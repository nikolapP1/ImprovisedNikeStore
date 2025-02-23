#include "Store.h"
#include<iostream>
using namespace std;

Store::Store() : productCount(0)
{
	for (int i = 0; i < MAX_PRODUCTS; ++i)
	{
		products[i] = nullptr;
	}
}

Store::~Store() {
	for (int i = 0; i < productCount; ++i)
	{
		if (products[i] != nullptr)
		{
			delete products[i];
			products[i] = nullptr;
		}
	}
}

void Store::addProducts(Product* product)
{
	if (productCount < MAX_PRODUCTS)
	{
		products[productCount++] = product;
	}
	else {
		cerr << "Store is full, cannot add more Products! " << endl;
	}
}

void Store::displayProducts() const {
	for (int i = 0; i < productCount; ++i)
	{
		if (products[i] != nullptr)
		{
			products[i]->display();
			cout << "-----------------" << endl;
		}
	}
}

	void Store::purchaseProduct(const char* productName, int quantity)  {
		for (int i = 0; i < productCount; ++i) {
			if (products[i] != nullptr && strcmp(products[i]->getName(), productName) == 0) {
				if (products[i]->getQuantity() >= quantity) {
					products[i]->reduceQuantity(quantity);
					cout << "You have successfully purchased " << quantity << "  " << productName <<"(s)!"<< endl;
				}
				else {
					cout << "Sorry, we only have " <<products[i]->getQuantity()<<" "<< productName << "(s) left." << endl;
				}
				return;
			}
		}
		cout << "Product  not found!" << endl;
	};
