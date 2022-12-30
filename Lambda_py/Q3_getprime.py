from sympy import ntheory as nt
def get_prime_factors(whole_num):
    factors = [num for num in range(1,int((1+whole_num)**0.5)) if whole_num%num ==0]
    prime_factors = [prime for prime in factors if nt.isprime(prime)==True]
    print(prime_factors)
    return max(prime_factors)
    
print(get_prime_factors(600851475143))