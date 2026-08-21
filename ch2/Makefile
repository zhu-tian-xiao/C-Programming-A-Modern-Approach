CC := gcc
CFLAGS := -std=c11 -Wall -Wextra

PROGRAMS := \
	programming01 \
	programming02 \
	programming03 \
	programming04 \
	programming05 \
	programming06 \
	programming07 \
	programming08

.PHONY: all clean

all: $(PROGRAMS)

programming01: programming01.c
	$(CC) $(CFLAGS) $< -o $@

programming02: programming02.c
	$(CC) $(CFLAGS) $< -o $@

programming03: programming03.c
	$(CC) $(CFLAGS) $< -o $@

programming04: programming04.c
	$(CC) $(CFLAGS) $< -o $@

programming05: programming05.c
	$(CC) $(CFLAGS) $< -o $@

programming06: programming06.c
	$(CC) $(CFLAGS) $< -o $@

programming07: programming07.c
	$(CC) $(CFLAGS) $< -o $@

programming08: programming08.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGRAMS)