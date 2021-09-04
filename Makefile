CC=gcc

clean:
	@find . -name 'login' -delete

compile:
	$(CC) -o login login.c

build: clean compile

default: build
