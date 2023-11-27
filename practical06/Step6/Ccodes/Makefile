CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm 

all: matmultc

matmultc: main.o matmult.o
	#$(CC) -o matmultc main.o matmult.o $(LDFLAGS)
	$(CC) -o $@ $^ $(LDFLAGS)

matmult.o: matmult.c
	#$(CC) -c $(CCFLAGS) matmult.c 
	$(CC) -c $(CCFLAGS) $^

main.o: main.c
	#$(CC) -c $(CCFLAGS) main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o
