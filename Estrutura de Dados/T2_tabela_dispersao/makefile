hash:
	gcc -c tabelahash.c
	gcc main.c tabelahash.o -o main
	./main

semColisao100:
	gcc -c ./tabelahash.c -o ./tabelahash.o
	gcc ./semColisao100.c ./tabelahash.o -o ./semColisao100
	./semColisao100

	valgrind --leak-check=full ./semColisao100

semColisao50000:
	gcc -c ./tabelahash.c -o ./tabelahash.o
	gcc ./semColisao50000.c ./tabelahash.o -o ./semColisao50000
	./semColisao50000

	valgrind --leak-check=full ./semColisao50000


semColisao100000:
	gcc -c ./tabelahash.c -o ./tabelahash.o
	gcc ./semColisao100000.c ./tabelahash.o -o ./semColisao100000
	./semColisao100000

	valgrind --leak-check=full ./semColisao100000	

#================================================================
comColisao100:
	gcc -c ./tabelahash.c -o ./tabelahash.o
	gcc ./comColisao100.c ./tabelahash.o -o ./comColisao100
	./comColisao100

	valgrind --leak-check=full ./comColisao100	

comColisao50000:
	gcc -c ./tabelahash.c -o ./tabelahash.o
	gcc ./comColisao50000.c ./tabelahash.o -o ./comColisao50000
	./comColisao50000

	valgrind --leak-check=full ./comColisao50000	

comColisao100000:
	gcc -c ./tabelahash.c -o ./tabelahash.o
	gcc ./comColisao100000.c ./tabelahash.o -o ./comColisao100000
	./comColisao100000

	valgrind --leak-check=full ./comColisao100000	