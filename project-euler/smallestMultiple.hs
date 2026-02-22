smallestMultiple n asc sum
  | evenlyDivisible n asc = asc
  | otherwise = smallestMultiple n (asc+sum) sum

biggestPrime n _ _ | n < 2 = 0
biggestPrime n 1 [] = biggestPrime n 3 [2]
biggestPrime n ite (x:xs)
  | ite > n = x
  | isPrime ite (x:xs) = biggestPrime n (ite+1) (ite:(x:xs))
  | otherwise = biggestPrime n (ite+1) (x:xs)

isPrime n [] = True
isPrime n (x:xs)
  | mod n x == 0 = False
  | otherwise = isPrime n xs

evenlyDivisible ite num
  | ite == 1 = True
  | mod num ite == 0 = evenlyDivisible (ite-1) num
  | otherwise = False

