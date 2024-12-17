CC = gcc
CFLAGS = -Wall -g

main: app.c
	$(CC) $(CFLAGS) -o app app.c

clean:
	rm -f app *.o