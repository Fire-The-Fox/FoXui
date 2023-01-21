CC = cc
CFLAGS = -Wall -Wextra -g -lX11
OBJ = windowRegistry.o foxWidget.o

X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

%.o: %.c
	$(CC) -c -o $@ $< -I${X11INC} -L${X11LIB} $(CFLAGS)

all: $(OBJ)
	ar rcs ../libFoXorg.a $(OBJ)

clean:
	rm -rf *.o
	rm -rf ../libFoXorg.a
