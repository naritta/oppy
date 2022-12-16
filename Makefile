all: test

clean:
	rm -f *.o out

test:
	g++ -c -o main.o main.cpp
	g++ -c -o json_reader.o json_reader.cpp
	g++ -o out main.o json_reader.o

run:
	./out
