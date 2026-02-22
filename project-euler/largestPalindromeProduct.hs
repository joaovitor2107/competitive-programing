isPalindrome num = str == reverse str
  where str = show num

biggestPalindrome num1 num2 res
  | num1 < 100 = res
  | num2 < 100 = biggestPalindrome (num1-1) 999 res
  | isPalindrome (num1*num2) && ((num1*num2) > res) =
    biggestPalindrome num1 (num2-1) (num1*num2)
  | otherwise = biggestPalindrome num1 (num2-1) res
