prog_avg:count_char.o main.o 
	gcc count_char.o main.o -o prog_avg
	
average.o: count_char.c count_char.h
	gcc -g -Wall -Wextra -fanalyzer -c count_char.c -o count_char.o

main.o: main.c count_char.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
	

clean:
	rm -f *.o prog_avg

run: prog_avg
	./prog_avg
