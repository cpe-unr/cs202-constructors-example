//
// Created by Keith Lancaster on 2/11/21.
//

#ifndef CODE_BOWL_H
#define CODE_BOWL_H

#include <iostream>

class Bowl {
    std::string color;
    float percentageFull = 0;
    int foodHeld;
public:
    Bowl(std::string color, int foodQuantity);
    Bowl(){
        std::cout << "bowl created with default constructor at " << this << std::endl;
    }
    ~Bowl(){
        std::cout << "Bowl destroyed at " << this << std::endl;
    }
    Bowl(const Bowl& rhs){
        std::cout << "in bowl copy constructor for " << this << std::endl;
        foodHeld = rhs.foodHeld;
        percentageFull = rhs.percentageFull;
        color = rhs.color;
    }
};



#endif //CODE_BOWL_H
