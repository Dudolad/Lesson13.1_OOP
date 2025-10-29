#include "SportsEquipment.h"

Products::Sport::SportsEquipment::SportsEquipment()
{
    kind = "undefined";
    weight = 0;
}

Products::Sport::SportsEquipment::SportsEquipment(std::string name, float price, std::string manufacture, int age, std::string kind, float weight)
    : Product()
{
}

void Products::Sport::SportsEquipment::setKind(std::string kind)
{
}

void Products::Sport::SportsEquipment::setWeight(float weight)
{
}

std::string Products::Sport::SportsEquipment::getKind() const
{
    return std::string();
}

float Products::Sport::SportsEquipment::getWeight() const
{
    return 0.0f;
}

void Products::Sport::SportsEquipment::show() const
{
}

float Products::Sport::SportsEquipment::calcPrice() const
{
    return 0.0f;
}
