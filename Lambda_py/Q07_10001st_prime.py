from sympy.ntheory import isprime
def all_primes(nth):
    num = 0
    primes = []
    while len(primes)<nth:
        if isprime(num):
            primes.append(num)
        num+=1
    return primes[-1]

print(all_primes(6),' and ',all_primes(10_001))