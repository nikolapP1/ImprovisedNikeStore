#include <iostream>
#include "Product.h"
#include "Store.h"
using namespace std;

int main()
{
	Store nikeStore;

	nikeStore.addProducts(new Shoes("Nike Air Max 90", 239.99, 10, 43));
	nikeStore.addProducts(new Clothing("Nike T-Shirt", 49.99, 30, "M"));
	nikeStore.addProducts(new Clothing("Nike Hoodie", 119.99, 25, "L"));


	cout << "Welcome to Nike" << endl;
	nikeStore.displayProducts();

	char productName[50];
	int quantity;
	cout << "Enter the product name you want: ";
	cin.ignore();
	cin.getline(productName, 50);
	cout << "Enter the quantity you want to add: ";
	cin >> quantity;

	nikeStore.purchaseProduct(productName, quantity);
	nikeStore.displayProducts();

	return 0;


}
