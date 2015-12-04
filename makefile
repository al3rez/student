all:
	mkdir ./bin
	gcc -std=c11 src/*.c -I./include -o bin/student
clean:
	rm ./bin -rf
