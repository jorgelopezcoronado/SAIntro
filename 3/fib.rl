a := 0;
b := 1;
input n;
i := 1;
F := 0;
if n = 0 goto done;
if n = 1 goto one;
Fib: if i = n goto done;
	F := a + b;
	a := b;
	b := F;
	i := i + 1; 
	goto Fib;
one:
	F := 1
done:
output F;
