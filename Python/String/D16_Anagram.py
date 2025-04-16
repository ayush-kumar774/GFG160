class Solution:
    def areAnagram(self, s1, s2):
        if len(s1) != len(s2):
            return False

        freq = [0] * 26

        for a, b in zip(s1, s2):
            freq[ord(a) - ord('a')] += 1
            freq[ord(b) - ord('a')] -= 1

        return all(count == 0 for count in freq)


sol = Solution()
print(sol.areAnagram("geeks", "keesg"))  
print(sol.areAnagram("hello", "hell"))  


# ord() gives you the ASCII (Unicode) integer of a character.
# zip(s1, s2)
# zip() takes two iterables and returns pairs:
# zip("abc", "xyz") → [('a','x'), ('b','y'), ('c','z')]
# You're looping over characters from both strings at once, in parallel.