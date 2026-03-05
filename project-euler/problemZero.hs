probSol :: Integer -> Integer -> Integer
probSol asc i
 | i > 575000 = asc
 | otherwise = probSol (i^2 + asc) (i+2)
