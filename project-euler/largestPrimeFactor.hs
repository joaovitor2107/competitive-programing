factorPrimes num [] = factorPrimes num [2]
factorPrimes num (x:xs)
  | num == 1 = x
  | mod num x == 0 = factorPrimes (div num x) (x:xs)
  | otherwise = factorPrimes num (nextPrime x (x:xs))


nextPrime ite primelst
  | isPrime ite primelst = ite:primelst
  | otherwise = nextPrime (ite + 1) primelst

isPrime 2 [] = True
isPrime ite [] = True
isPrime ite (x:xs)
  | mod ite x == 0 = False
  | otherwise = isPrime ite xs
