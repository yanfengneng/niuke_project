#include "Solider.h"

Solider::Solider(string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

Solider::~Solider()
{
    if (this->_ptr_gun == nullptr)
        return;
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}

void Solider::add_gun(Gun *ptr_gun)
{
    this->_ptr_gun = ptr_gun;
}

void Solider::add_bullet_to_gun(int num)
{
    this->_ptr_gun->add_bullet(num);
}

bool Solider::fire()
{
    return this->_ptr_gun->shoot();
}