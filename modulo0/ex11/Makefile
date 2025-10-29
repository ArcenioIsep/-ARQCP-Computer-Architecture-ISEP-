prog_avg:string_to_int.o main.o 
	gcc string_to_int.o main.o -o prog_avg
	
average.o: string_to_int.c string_to_int.h
	gcc -g -Wall -Wextra -fanalyzer -c string_to_int.c -o string_to_int.o

main.o: main.c average.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
	

clean:
	rm -f *.o prog_avg

run: prog_avg
	./prog_avg
