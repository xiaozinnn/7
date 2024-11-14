#include "Gun.h"
#include <iostream>

void Gun::addBullet(int bullet_num)
{
    this->_bullet_cout = bullet_num;
}

bool Gun::shoot()
{
    if (this->_bullet_cout <= 0)
    {
        std::cout << "no bullet!!!" << std::endl;
        return false;
    }
    this->_bullet_cout -= 1;
    std::cout << "shoot successfully" << std::endl;
    return true;
}