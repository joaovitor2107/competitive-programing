squareSums n sum
  | n == 0 = sum*sum
  | otherwise = squareSums (n-1) (sum+n)

sumSquares n sum
  | n == 0 = sum
  | otherwise = sumSquares (n-1) sum+(n*n)
