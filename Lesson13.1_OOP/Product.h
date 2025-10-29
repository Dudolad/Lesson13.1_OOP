#pragma once
#include <iostream>
#include <string>
#include <fstream>

namespace Products 
{
	class Product
	{
	protected:
		std::string name;
		float price;
		std::string manufacture;
		int age;
	public:
		Product();
		Product(std::string name, float price, std::string manufacture, int age);
		virtual ~Product();

		void setName(std::string name);
		void setPrice(float price);
		void setManufacture(std::string manufacture);
		void setAge(int age);

		std::string getName() const;
		float getPrice() const;
		std::string getManufacture() const;
		int getAge() const;

		virtual void show()const = 0;
		virtual float calcPrice()const = 0;
		//virtual void saveToFile(std::ofstream& file) const = 0;
		//virtual void loadFromFile(std::ifstream& file) = 0;
	};
}

