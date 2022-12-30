a=0
b=1
fib_list=[]
while b<4_000_000:
	a,b=b,a+b
	fib_list.append(a)

even_fib = [fib for fib in fib_list if fib%2==0]
print(sum(even_fib))
