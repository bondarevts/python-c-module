all: spammodule.dylib

spammodule.dylib: spammodule.c
	gcc -dynamiclib spammodule.c -framework Python -o spammodule.dylib

clear:
	rm -f spammodule.dylib
