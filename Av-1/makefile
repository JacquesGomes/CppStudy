PROG = funcionarios

CC = g++

CPPFLAGS = -O0 -g -W -Wall -pedantic

SRCS = funcionarios.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

funcionarios.o : funcionarios.cpp funcionarios.hpp
	$(CC) $(CPPFLAGS) -c funcionarios.cpp

main.o : main.cpp funcionarios.hpp
	$(CC) $(CPPFLAGS) -c main.cpp

clean:
	rm -f $(OBJS)