CXX = g++
CXXFLAGS = -std=c++14 -g -Wall
DEPS =  divide.h solucion.h problema.h mergesort-problema.h mergesort-solucion.h
OBJ = main.o mergesort-problema.o mergesort-solucion.o problema.o solucion.o divide.o

%.o: %.cc $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

main: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean
clean:
	rm main *.o