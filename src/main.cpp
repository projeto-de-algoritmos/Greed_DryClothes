#include <iostream>
#include "../inc/greed.hpp"

int main() {

    Greed opa;

    opa.insertClothes();
    opa.insertClothes();
    opa.insertClothes();

    std::cout << '\n';
    opa.init();

    return 0;

}
