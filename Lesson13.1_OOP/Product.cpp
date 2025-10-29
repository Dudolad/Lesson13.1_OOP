#include "Product.h"

Products::Product::Product()
{
    name = "noname";
    price = 0;
    manufacture = "undefined";
    age = 0;
}

Products::Product::Product(std::string name, float price, std::string manufacture, int age)
{
    this->name = name;
    this->price = price;
    this->manufacture = manufacture;
    this->age = age;
}

Products::Product::~Product()
{
}

void Products::Product::setName(std::string name)
{
    this->name = name;
}

void Products::Product::setPrice(float price)
{
    this->price = price;
}

void Products::Product::setManufacture(std::string manufacture)
{
    this->manufacture = manufacture;
}

void Products::Product::setAge(int age)
{
    this->age = age;
}

std::string Products::Product::getName() const
{
    return name;
}

float Products::Product::getPrice() const
{
    return price;
}

std::string Products::Product::getManufacture() const
{
    return manufacture;
}

int Products::Product::getAge() const
{
    return age;
}
