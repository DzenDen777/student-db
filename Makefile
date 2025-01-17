
CC = gcc
BIN = StudentDataBase
SOUECES = file.c inout.c main.c
OBJECTS = $(SOURCES:.c=.o)

default: $(BIN)

$(BIN): common.h $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

clean: 
	rm $(BIN) $(OBJECTS)

help: 
	@echo "Please run make $(BIN)"

.PHONY: help clean default