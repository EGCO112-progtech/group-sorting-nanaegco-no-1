compile: main.c 
	 gcc  main.c -o sort

runSelection: selection
	  ./selection

run: sort
	 ./sort


clean: sort
	 rm sort
