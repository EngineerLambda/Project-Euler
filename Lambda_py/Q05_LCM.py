from math import gcd
def get_lcm(num_range):
    lcm = 1
    for i in range(1,1+num_range):
        lcm *=i//gcd(lcm,i)
    return lcm

print(get_lcm(20))