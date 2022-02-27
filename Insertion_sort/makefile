compileAll : measureTimeAndSpace.c insertionSort.o readRecords.o
	gcc measureTimeAndSpace.c insertionSort.o readRecords.o -o executable
insertionSort.o : insertionSort.c header_files.h
	gcc -c insertionSort.c
readRecords.o : readRecords.c header_files.h
	gcc -c readRecords.c