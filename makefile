all:
	mkdir -p ./bin
	gcc -std=c11 src/*.c -I./include -o bin/student
clean:
	if [ -d "./bin" ]; then rm ./bin -rf; fi
