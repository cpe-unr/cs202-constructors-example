cats: main.o cat.o bowl.o
	g++ -std=c++11 -o cats main.o cat.o bowl.o

main.o: main.cpp cat.h
	g++ -std=c++11 -c main.cpp

cat.o: cat.cpp cat.h bowl.h bowl.cpp
	g++ -std=c++11 -c cat.cpp

bowl.o: bowl.cpp bowl.h
	g++ -std=c++11 -c bowl.cpp
clean:
	rm *.o cats