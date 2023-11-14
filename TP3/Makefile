tests : test.o matrices.o gestion.o polynome.o
	$(CC) -o $@ $^ -Wall -lm

gestion.o : gestion.c gestion.h
	$(CC) -c -Wall $^ -lm

polynome.o: polynome.c polynome.h
	$(CC) -c  -Wall $^ -lm

matrices.o: matrices.c matrices.h
	$(CC) -c -Wall $^

test.o : test.c
	$(CC) -c -Wall $^ -lm

.PHONY: clean

OBJS = gestion.o polynome.o matrices.o test.o
HEADERS = $(OBJS:.o=.h)
clean:
	rm -rf $(OBJS) $(HEADERS)