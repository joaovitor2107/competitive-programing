evenFib a b asc
  | a > 4000000 = asc
  | even a = evenFib b (a+b) (asc+a)
  | otherwise = evenFib b (a+b) asc
