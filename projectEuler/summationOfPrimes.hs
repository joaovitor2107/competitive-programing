simpleSieve :: Int -> [Int]
simpleSieve n = sieve [2..n]
  where
    sieve [] = []
    sieve (p:xs)
      | p*p > n = p:xs
      | otherwise = p : sieve (filter (\x -> mod x p /= 0) xs)

-- filter :: (a -> Bool) -> [a] -> [a]
-- filter - apply for every element on a list a condition, if it is true it stays in the list
-- if it is false it is not added

main = print $ sum $ simpleSieve 2000000
