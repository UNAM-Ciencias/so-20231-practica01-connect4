CC=gcc
CFLAGS=-c -Wall -Werror
LDFLAGS=
SOURCES=list_node.c soluciones.c testing_framework.c main.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=test

all: $(EXECUTABLE)

$(EXECUTABLE): compile
	./docker-exec test

compile:
	./docker-exec compile

clean:
	./docker-exec clean

check: $(EXECUTABLE)