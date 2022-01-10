compile: main.c 
	 gcc main.c -o pao

run: pao
	 ./pao

clean: pao
	 rm pao