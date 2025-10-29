prog_avg:count_words.o main.o 
	gcc count_words.o main.o -o prog_avg
	
average.o: count_words.c count_words.h
	gcc -g -Wall -Wextra -fanalyzer -c count_words.c -o count_words.o

main.o: main.c count_words.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
	

clean:
	rm -f *.o prog_avg

run: prog_avg
	./prog_avg
