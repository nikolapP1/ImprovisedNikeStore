#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include<cstring>

class Product {
protected:
	char name[50];
	double price;
	int quantity;

public:
	Product();
	Product(const char* n, double p, int q);
	virtual void display() const;
	const char* getName() const;
		double getPrice() const;
	int getQuantity() const;
	void reduceQuantity(int q);
	};

class Shoes : public Product {
private:
	int size;

public:
	Shoes();
	Shoes(const char* n, double p, int q, double s);
	void display() const override;
};
class Clothing : public Product {
private:
	char size[5];

public:
	Clothing();
	Clothing(const char* n, double p, int q,const char* s);
	void display() const override;
};


#endif // PRODUCT_H

