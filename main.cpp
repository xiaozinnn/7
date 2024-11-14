#include "Gun.h"
#include "Solider.h"
#include <iostream>

void test()
{
    Solider sanduo("xusanduo");
    Gun *gun = new Gun("AK47");
    sanduo.addGun(gun);
    sanduo.addBullerToGun(20);
    sanduo.fire();
}

int main()
{
    std::cout << "This is a test string..." << std::endl;
    std::cout << "This is a test string..." << std::endl;
    test();
    return 0;
}