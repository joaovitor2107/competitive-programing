findPrime n _ [] = findPrime n 1 [2]
findPrime n ite (x:xs)
 | ite == n = x
 | otherwise = findPrime n (ite+1) (nextPrime x (x:xs))


nextPrime n lst
  | mod n 2 == 0 = nextPrime (n+1) lst
  | isPrime n lst = (n:lst)
  | otherwise = nextPrime (n+1) lst


isPrime n [] = True
isPrime n (x:xs)
  | mod n x == 0 = False
  | otherwise = isPrime n xs
