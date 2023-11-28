CC = gcc
CCFLAGS = -O2
LDFLAGS = -lm

matmultc: Matmultprog.o matmultf.o
	$(CC) -o matmultc Matmultprog.o matmultf.o $(LDFLAGS)

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) matmultf.c

main.o: main.c
	$(CC) -c $(CCFLAGS) Matmultprog.c
