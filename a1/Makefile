CC = g++
CFLAGS = -Wall

all: game

game: main.cpp Human.o Computer.o Player.o Referee.o
	$(CC) $(CFLAGS) main.cpp Human.o Computer.o Player.o Referee.o -o game

Human.o: Human.cpp Human.h Player.h
	$(CC) $(CFLAGS) -c Human.cpp

Computer.o: Computer.cpp Computer.h Player.h
	$(CC) $(CFLAGS) -c Computer.cpp

Player.o: Player.cpp Player.h
	$(CC) $(CFLAGS) -c Player.cpp

Referee.o: Referee.cpp Referee.h Player.h
	$(CC) $(CFLAGS) -c Referee.cpp

clean:
	rm -rf *.o game
