#pragma once
#include <string>
#include "Gun.h"

class Solider
{
public:
    Solider(std::string name)
    {
        this->_name = name;
        this->_ptr_gun = NULL;
    }
    ~Solider();
    void addBullerToGun(int num);
    void addGun(Gun *ptr_gun);
    bool fire();

private:
    std::string _name;
    Gun *_ptr_gun;
};