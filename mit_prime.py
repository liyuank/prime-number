#problem set 1
#2016.10.03
 
#find the 1000th prime number

import math
import timeit

start = timeit.default_timer()

def isPrime(n):
    a = int(math.sqrt(n))
    
    for i in range(2, a+1):
        if n % i == 0:
            #print ("%d is not a prime number!" %n)
            return False
            break

    return True

        
    
count = 3

for num in range(7, 10000):
    if isPrime(num):
        count = count + 1
        #print ("%d is a prime number." %num) 
        #print ("count is %d\n" %count)
        
    if count == 1000:
        print ("%d is the %dth prime number!" %(num, count))
        break

stop = timeit.default_timer()

print (stop - start)
