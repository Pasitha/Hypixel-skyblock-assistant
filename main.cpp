#include <iostream>
#include <nlohmann/json.hpp>
#include <cpr/cpr.h>

#include "hypixel.h"

int main() {
    // create object hypixel name hypixel with constructer is your APIkey
    struct hypixel hypixel("6080e1da-c45b-4ce1-a25c-4f029492fd01");
    // access object bazaar and create object bazaar name bazaar
    struct hypixel::skyblock::bazaar bazaar;

    std::cout << bazaar.buyInstanlyPrice(&hypixel, "CLAY_BALL") << std::endl;
    std::cout << bazaar.sellInstanlyPrice(&hypixel, "CLAY_BALL") << std::endl;
    return 0;
}
