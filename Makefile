CC=gcc

clean:
	@find . -name 'login' -delete
	@find . -name 'login.exe' -delete

compile:
	$(CC) -o login.exe login.c

build: clean compile

default: build
