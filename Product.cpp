#include "Product.h"
using namespace std;


Product::Product() {
	strncpy_s(name, "Unnamed", 50);
	price = 0.0;
	quantity = 0;
	}

Product::Product(const char* n, double p, int q)
{
	strncpy_s(name, n, 50);
	price = p;
	quantity = q;
}

void Product::display() const {
	cout << "Product: " << name << " ,Price: $" << price << ", Quantity: " << quantity << endl;
}

const char* Product::getName() const {
	return name;
}

double Product::getPrice() const {
	return price;
}

int Product::getQuantity() const {
	return quantity;
}
void Product::reduceQuantity(int q) {
	quantity -= q;
}

Shoes::Shoes() : Product()
{
	size = 0;
}
Shoes::Shoes(const char* n, double p, int q, double s) : Product(n,p,q)
{
	size = s;
}
	void Shoes::display() const {
		Product::display();
		cout << "Size: " << size << endl;
}

	Clothing::Clothing() : Product()
	{
		strncpy_s(size, "NA", 4);
	}
	Clothing::Clothing(const char* n, double p, int q, const char* s) : Product(n, p, q)
	{
		strncpy_s(size, s, 4);
	}
	void Clothing::display() const {
		Product::display();
		cout << "Size: " << size << endl;
	}