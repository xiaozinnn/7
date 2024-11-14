#pragma once
#include <string>

class Gun
{
public:
    Gun(std::string type)
    {
        this->_bullet_cout = 0;
        this->_type = type;
    }

    void addBullet(int bullet_num);
    bool shoot();

private:
    int _bullet_cout;
    std::string _type;
};