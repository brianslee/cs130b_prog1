CC = g++ -g
STDFLAGS = -std=c++11

all: prog1

prog1:
	$(CC) prog1.cc main.cc -o $@ $(STDFLAGS)

.PHONY: clean

clean:
	rm -rf prog1