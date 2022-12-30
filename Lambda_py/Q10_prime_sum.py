from sympy.ntheory import isprime
def prime_sum(n):
    sum = 0
    for num in range(n):
        if isprime(num):
            sum += num
    return sum

print(prime_sum(2_000_000))