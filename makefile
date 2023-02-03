compile: main.c 
	 gcc  main.c -o test

runSelection: selection
	  ./selection

run: test
	 ./test


clean: test
	 rm test
