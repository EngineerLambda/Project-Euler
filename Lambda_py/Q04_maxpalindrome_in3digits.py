def ispalindrome(num):
    if str(num)==str(num)[::-1]:
        return True
    else:
        return False
def get_palindrome():
    palindromes=[]
    for i in range(100,1000):
        for j in range(100,1000):
            mul=i*j
            if ispalindrome(mul)==True:
                palindromes.append(mul)
    return list(set(palindromes))


pals=get_palindrome()
print(max(pals))