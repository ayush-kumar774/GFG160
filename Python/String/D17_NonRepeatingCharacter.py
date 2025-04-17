def non_repeating_char(s):
      freq = [0] * 26

      for c in s:
            freq[ ord(c) - ord('a') ] += 1

      for c in s:
            if freq[ord(c) - ord('a') ] == 1:
                  return c
            
      return '$'

print(non_repeating_char("geeksforgeeks")) 
print(non_repeating_char("racecar"))
print(non_repeating_char("aabbcc"))