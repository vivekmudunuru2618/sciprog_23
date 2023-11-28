
Week - 6
Practical - 6
Venkata Vivek Kumar Mudunuru - 23200316

The command for the executible will be: make , as it will take the contents of makefile and compile them and give the output in matmultc

As follows :

CC = gcc
CCFLAGS = -O2
LDFLAGS = -lm

matmultc: Matmultprog.o matmultf.o
	$(CC) -o matmultc Matmultprog.o matmultf.o $(LDFLAGS)

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) matmultf.c

main.o: main.c
	$(CC) -c $(CCFLAGS) Matmultprog.c

 



The README file describes Practical 06, focusing on matrix multiplication. The main file Matmultprog.c initializes matrices A and B, ensuring the number of columns in A matches the number of rows in B. The matmultf.c file contains a function to execute the matrix multiplication code independently, allowing modularity. The included Makefile simplifies compilation, enabling changes in code without the need for intermediate object files. This setup streamlines matrix multiplication, making the process efficient and easy to modify.