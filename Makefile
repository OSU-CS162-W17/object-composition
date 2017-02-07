all: application

application: application.cpp state.o county.o
	g++ application.cpp state.o county.o -o application

state.o: state.cpp state.hpp
	g++ -c state.cpp

county.o: county.cpp county.hpp
	g++ -c county.cpp

clean:
	rm -f application *.o
