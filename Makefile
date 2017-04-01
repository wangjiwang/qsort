
msort : main.o msort.o generate_data.o
		cc -o msort main.o msort.o generate_data.o
main.o : main.c msort.c msort.h
		cc -c main.c
msort.o : msort.c msort.h
		cc -c msort.c
generate_data.o : generate_data.c generate_data.h
		cc -c generate_data.c
clean :
	rm -f *.o msort
