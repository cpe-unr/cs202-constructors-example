#include "cat.h"


using namespace std;

int main() {
    Bowl bowl("blue",10);
    Cat myCat("Tubby","Killer of Mouses",4,"Brown","Tabby",bowl);
    myCat.init("catdata.txt");
    myCat.printCatDetails();
}


