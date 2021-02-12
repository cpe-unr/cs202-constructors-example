//
// Created by Keith Lancaster on 2/11/21.
//

#include "bowl.h"
#include <iostream>
#include <string>

using namespace std;

Bowl::Bowl(string color, int foodQuantity):color(color), foodHeld(foodQuantity){
    std::cout << "Bowl created with param ctor at " << this << endl;
}