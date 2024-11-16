.PHONY: clean Fibonacci Fibonacci_test
CC=g++
LINTER=clang-format
FLAGS=-Wall -Werror -Wextra
CXXFLAGS += -lgtest -lgtest_main

all: test Fibonacci clean
	@echo "all..."

test: Fibonacci_test
	@echo "test all ..."

Fibonacci:
	$(CC) $(FLAGS) src/Fibonacci/main.cpp -o Fibonacci.out
	./Fibonacci.out

Fibonacci_test:
	$(CC) $(CXXFLAGS) src/Fibonacci/Fibonacci.test.cpp -o Fibonacci_test.out
	./Fibonacci_test.out

lint:
	$(LINTER) -i src/**/*.cpp src/**/*.h  src/**/*.hpp

clean:
	rm -rf *.out