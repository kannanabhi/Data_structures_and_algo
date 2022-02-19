# Multi Queue Implementation


### Task Scheduling system using Multi-queue concept

Task scheduling system where tasks are queued according to priority i.e. each task is added to a FIFO queue according to its priority. (e.g. an Operating System where processes arrive to be executed and each process has a priority that is not necessarily unique; e.g. a machine shop where requests for machining jobs come with a priority). All these scenarios can be modelled using the ADT MultiQ.
Operations on MultiQ are in the file muliq.c. Note that createMQ will dynamically allocate an array of size num (the value that is passed to it) and return it. The implementation of MultiQ should uses ADT Queue to perform the operations.
ADT queue has all of the features of a queue data structure implemented using a linked_list and is present queue.h. The operations of Queue are found in queue.c.
In file testMultiq.c , function to test the time taken to run operations are measured using the library <time.h> . It is found to match with the theoretically time complexity of operations.