output: test.o lot.o developed_lot.o
	g++ test.o lot.o developed_lot.o -o output

test.o: test.cpp
	g++ test.cpp -c

lot.o: lot.cpp lot.hpp
	g++ lot.cpp lot.hpp -c

developed_lot.o: developed_lot.cpp developed_lot.hpp
	g++ developed_lot.cpp developed_lot.hpp -c
clean:
	rm *.o output