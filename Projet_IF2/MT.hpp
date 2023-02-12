//
//  MT.hpp
//  Projet_IF2
//
//  Created by Arthur Cluet on 20/12/2022.
//

#ifndef MT_hpp
#define MT_hpp

#include <stdio.h>
#include <random>
#include <iostream>

class MT {
public:
    MT(const MT&) = delete;
    static MT& getInstance();
    static std::mt19937 & Gen();
    std::mt19937 & IGen();
    static double rand_unif();
    static double rand_norm();
private:
    MT();
    static MT s;
    std::random_device rd;
    std::mt19937 mt;
};

#endif /* MT_hpp */
