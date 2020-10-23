#ifndef GREED_HPP
#define GREED_HPP

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>

constexpr int MAX {20};
class Greed {
public:
    std::string nome[MAX];
    int size[MAX];
    int estimateTime[MAX];
    int totalClothes;


    Greed();
    ~Greed();

    void insertClothes();

    void init();

};

#endif