
CC = gcc
BIN = student-db
SOURCES = file.c inout.c main.c
OBJECTS = $(SOURCES:.c=.o)

default: $(BIN)

$(BIN): common.h $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

clean: 
	rm -f $(BIN) $(OBJECTS)

help: 
	@echo "Please run make $(BIN)"

.PHONY: help clean