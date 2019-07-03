#return YES if the number is represented as a multiplication of individual single digits:

def number(n):

    ch=""

    for i in range(1,9):

        for j in range(1,9):

            if(i*j==n):

                ch="yes"

                return ch

    return n

print(number(14))
