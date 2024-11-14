#include "Solider.h"

void Solider::addBullerToGun(int num)
{
    this->_ptr_gun->addBullet(num);
}

void Solider::addGun(Gun *ptr_gun)
{
    this->_ptr_gun = ptr_gun;
}

bool Solider::fire()
{
    return this->_ptr_gun->shoot();
}

Solider::~Solider()
{
    if (this->_ptr_gun != NULL)
    {
        delete this->_ptr_gun;
        this->_ptr_gun = NULL;
    }
}