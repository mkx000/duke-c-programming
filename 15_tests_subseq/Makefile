.PHONY: clean

test-subseq: test-subseq.o maxSeq.o
	gcc -Wall -Werror -pedantic -std=gnu99 -o $@ test-subseq.o maxSeq.o

clean:
	rm -f *.o test-subseq
