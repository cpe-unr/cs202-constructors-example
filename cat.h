//
// Created by Keith Lancaster on 2/6/21.
//

#ifndef CODE_CAT_H
#define CODE_CAT_H

#include <string>
class Cat {
    static const int NUMCATPARAMS = 5;
    bool catInfoLoaded = false;
    std::string catName;
    std::string nameCatCallsSelf;
    int catAge;
    std::string catFurColor;
    std::string catBreed;
    void getCatInfo(std::ifstream &catDataStream);
    int catSleepTime();

public:
    // constructors
//    Cat();
//    Cat(std::string name, std::string selfName, int age, std::string catFurColor, std::string catBreed);
//    Cat(const Cat&);
//    Cat(bool catInfoLoaded, const std::string &catName, const std::string &nameCatCallsSelf, int catAge,
//        const std::string &catFurColor, const std::string &catBreed);

    bool init(std::string catInfoFile);
    void printCatDetails();
};
#endif //CODE_CAT_H
