all:
	gcc main.c

count: all
	./a.out abcdef | wc
