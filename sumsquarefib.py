#sum of squares of fibonacci numbser siries



def fib(n):

    a=0
    b=1

    l1=[]

    l1.append(a)

    l1.append(b)

    for i in range(2,n+1):

        c=a+b

        a=b

        b=c

        l1.append(c)

    return l1
def squares(l1):

    sums=0

    for i in l1:

        s=i*i

        sums=sums+s

    return sums

l1=fib(9)

print(squares(l1))

print(l1)

