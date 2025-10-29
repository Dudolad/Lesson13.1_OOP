#include "Book.h"

Products::Fun::Book::Book()
{
}

Products::Fun::Book::Book(std::string name, float price, std::string manufacture, int age, std::string author, std::string genre, int pages)
{
}

void Products::Fun::Book::setAuthor(std::string author)
{
}

void Products::Fun::Book::setGenre(std::string genre)
{
}

void Products::Fun::Book::setPages(int pages)
{
}

std::string Products::Fun::Book::getAuthor() const
{
    return std::string();
}

std::string Products::Fun::Book::getGenre() const
{
    return std::string();
}

int Products::Fun::Book::getPages() const
{
    return 0;
}

void Products::Fun::Book::show() const
{
}

float Products::Fun::Book::calcPrice() const
{
    return 0.0f;
}

void Products::Fun::Book::saveToFile(std::ofstream& file) const
{
}

void Products::Fun::Book::loadFromFile(std::ifstream& file)
{
}
