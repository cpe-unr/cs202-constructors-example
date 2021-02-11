//
// Created by Keith Lancaster on 2/6/21.
//
#include "cat.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// constructors
//Cat::Cat(string name, string selfName, int age, string catFurColor, string catBreed){
//    catName = name;
//    nameCatCallsSelf = selfName;
//    catAge = age;
//    this->catFurColor = catFurColor; // what is wrong here
//    this->catBreed = catBreed; // ?
//}

//Cat::Cat(bool catInfoLoaded, const string &catName, const string &nameCatCallsSelf, int catAge,
//         const string &catFurColor, const string &catBreed) : catInfoLoaded(catInfoLoaded), catName(catName),
//                                                              nameCatCallsSelf(nameCatCallsSelf), catAge(catAge),
//                                                              catFurColor(catFurColor), catBreed(catBreed) {}

// rhs stands for right hand side
//Cat::Cat(const Cat& rhs){
//    catName = rhs.catName;
//    catFurColor = rhs.catFurColor;
//    nameCatCallsSelf = rhs.catInfoLoaded;
//    catAge = rhs.catAge;
//    catBreed = rhs.catBreed;
//}


void Cat::getCatInfo(ifstream &catDataStream) {
    string catInfo[NUMCATPARAMS];
    int index = 0;
    for (index = 0; index < NUMCATPARAMS; index++) {
        getline(catDataStream, catInfo[index]);
    }
    catName = catInfo[0];
    nameCatCallsSelf = catInfo[1];
    catAge = stoi(catInfo[2]);
    catFurColor = catInfo[3];
    catBreed = catInfo[4];
}

int Cat::catSleepTime() {
    int sleepTime = 0;
    if (catBreed.compare("persion")) {
        return catAge > 10 ? 20 : 10;
    };
    return sleepTime;
}

bool Cat::init(const string catInfoFile) {
    ifstream catDataStream;
    catDataStream.open(catInfoFile);
    if (catDataStream.bad()) {
        cout << "Could not open file" << endl;
        return false;
    }
    getCatInfo(catDataStream);
    catDataStream.close();
    catInfoLoaded = true;
    return true;
}

void Cat::printCatDetails() {
    cout << "Cat Name: " << catName << "\n";
    cout << "Cat Real Name: " << nameCatCallsSelf << "\n";
    cout << "Cat Fur Color: " << catFurColor << "\n";
    cout << "Cat Breed: " << catBreed << "\n";
    int sleepTime = catSleepTime();
    cout << "Cat Sleep Time: " << sleepTime << "\n";
}

Cat::~Cat() {
    cout << "I am outa here" << endl;
}

