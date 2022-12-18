all: test

clean:
	rm -f *.o out

test:
	g++ -c -o main.o main.cpp -std=c++17
	g++ -c -o json_reader.o json_reader.cpp -std=c++17
	g++ -o out main.o json_reader.o

run:
	./out
