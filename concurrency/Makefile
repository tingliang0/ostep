all: t0 t1 create_and_join create_and_join2 create_and_join_bad

CFLAGS=-Wall -pthread

t0:
	gcc -o t0 t0.c $(CFLAGS)

t1:
	gcc -o t1 t1.c $(CFLAGS)

create_and_join:
	gcc -o create_and_join create_and_join.c $(CFLAGS)

create_and_join2:
	gcc -o create_and_join2 create_and_join2.c $(CFLAGS)

create_and_join_bad:
	gcc -o create_and_join_bad create_and_join_bad.c $(CFLAGS)

clean:
	rm -rf t0 t1 create_and_join create_and_join2 create_and_join_bad
