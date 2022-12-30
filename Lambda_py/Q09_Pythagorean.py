for a in range(1,400):
    for b in range(1,500):
        for c in range(1,600):
            if a<b<c and a**2+b**2==c**2 and a+b+c==1000:
                print(a,b,c)
                print(a*b*c)