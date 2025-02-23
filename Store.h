#ifndef STORE_H
#define STORE_H

#include "Product.h"


class Store {
private:
	static const int MAX_PRODUCTS = 1000;
	Product* products[MAX_PRODUCTS];
	int productCount;

	public:
		Store();
		~Store();
		void addProducts(Product* product);
		void displayProducts() const;
		void purchaseProduct(const char* productName, int quantity) ;
	};




#endif // STORE_H