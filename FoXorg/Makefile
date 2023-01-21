CC = cc
X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

all:
	$(MAKE) -C src all
	$(CC) test.c -o test -L. -L${X11LIB} -I${X11INC} -lX11 -lfoXorg
	@echo "To run test './test'"

