c10make: c10.c
	gcc -o c10make c10.c
	
clean:
	rm -f *.o c10make
