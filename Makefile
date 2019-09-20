CC = gcc

#.PHONY: check-syntax clean
.DEFAULT_GOAL: compile

# check-syntax: ex-compil.c
# 	$(CC) -c ex-compil.c 

compile: src/main.c src/morse_to_ascii.c src/ascii_to_morse.c
	$(CC) -o bin/converter $^ -I ./include

clean:        
	rm -f ./bin/*