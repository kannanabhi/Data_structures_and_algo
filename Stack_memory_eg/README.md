
a program with multiple procedures (say, p, g, h, and d) invoked from main – both
one after the other and from each other. Let each of these procedures contain a local
variable pilani, goa, hyd, and dub respectively. Let bits be a global variable.

(a) Print the addresses of the local variables pilani, goa, hyd, and dub under different
call sequences. Use the unary prefix operator & to obtain the address and use “%u”
format specifier (in printf) to print an address as unsigned int.
(b) Modify the procedure p such that it calls itself with a single updated argument e.g.
p(n) { … p(n+1) … }. Print the address of n each time p is invoked. Modify the test for
termination of the recursion and repeat the test until you get a runtime error.
(c) Summarize your understanding (for yourself) of the stack space allocated.