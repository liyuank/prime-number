def is_prime(n):
  if n % 2 == 0: return (n == 2)
  if n < 2: return False
  

  #if n < 9: return True

  if n % 3 == 0: return ( n == 3)
  r = int(n**0.5)
  f = 5
  while f <= r:
    print ('\t',f)
    if n%f == 0: return False
    if n%(f+2) == 0: return False
    f +=6
  return True    

"""test test """
print(is_prime(1))
print(is_prime(2))
print(is_prime(3))
print(is_prime(4))
print(is_prime(5))
print(is_prime(6))
print(is_prime(7))
print(is_prime(8))
print(is_prime(9))
print(is_prime(10))
print(is_prime(11))
