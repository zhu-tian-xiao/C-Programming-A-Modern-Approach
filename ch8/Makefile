CC := gcc
CFLAGS := -std=c11 -Wall -Wextra

SOURCES := $(wildcard programming*.c)
PROGRAMS := $(patsubst %.c,bin/%,$(SOURCES))

.PHONY: all clean

all: $(PROGRAMS)

bin:
	mkdir -p bin

bin/%: %.c | bin
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf bin