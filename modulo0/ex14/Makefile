prog_avg:count_value.o main.o 
	gcc count_value.o main.o -o prog_avg
	
average.o: count_value.c count_value.h
	gcc -g -Wall -Wextra -fanalyzer -c count_value.c -o count_value.o

main.o: main.c count_value.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
	

clean:
	rm -f *.o prog_avg

run: prog_avg
	./prog_avg
