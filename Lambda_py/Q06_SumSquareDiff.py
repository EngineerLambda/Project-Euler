def sum_square(n):
    sum = 0
    for i in range(1,1+n):
        square = i**2
        sum += square
    return sum

def square_sum(n):
    sum_ = 0
    for j in range(1,1+n):
        sum_ += j
    return sum_**2
print(square_sum(100)-sum_square(100))