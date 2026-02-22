sumMultiples:: Integer -> Integer -> Integer
sumMultiples asc ite
  | ite == 1000 = asc
  | mod ite 3 == 0 = sumMultiples (asc + ite) (ite + 1)
  | mod ite 5 == 0 = sumMultiples (asc + ite) (ite + 1)
  | otherwise = sumMultiples asc (ite+1)
