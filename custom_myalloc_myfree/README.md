(a)
Define your own allocation and deallocation procedures myalloc and myfree
respectively such that:

myalloc invokes malloc to allocate the space as requested and returns the
starting address of the allocated block; in addition, myalloc updates a global
variable that keeps track of total space allocated in the heap so far.
 myfree invokes free to free the space pointed to by the given argument, and
in addition, updates the global variable that keeps track of total space
allocated in the heap.

(b)
Write a loop that repeatedly allocates and frees a dynamic array of size M using your
myalloc and myfree procedures. In each iteration:
i. choose a random number M in the range 10,000 to 25,000.
ii. allocate an array A of M integers. Use sizeof to make it portable.
iii. print the addresses of the first and the last location of A i.e. A and &(A[M-1])
iv. free A
The loop should terminate when allocation fails. Test the return value of malloc for
failure.