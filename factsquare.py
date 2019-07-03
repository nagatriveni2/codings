#task is to check factorial of n is divisible sum of squares of n:

def fact(n):

    factorial=1

    for i in range(1,n+1):

        factorial=factorial*i

    return factorial

def sums(n):

    sums=0

    for i in range(1,n+1):

        s=0

        s=i*i

        sums=sums+s

    return sums

f=0

su=0

f=fact(7)

su=sums(7)

if(f%su==0):

    print("yes")

else:

    print("no")
