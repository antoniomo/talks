def mypow(a, b):
        for i in range(b):
                a += a
        return a

print(mypow(2,100000))
