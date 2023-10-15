principal: principal.o muldiv.o sumres.o
	gcc principal.o muldiv.o sumres.o

muldiv: muldiv.o sumres.o
	gcc muldiv.o sumres.o

sumres: sumres.o
	gcc sumres.o

muldiv.o: muldiv.c muldiv.h
	gcc muldiv.c -c

sumres.o: sumres.c sumres.h
	gcc sumres.c -c

clean:
	rm -rf *.exe *.o