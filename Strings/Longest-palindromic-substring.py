class Solution:
    def longestPalindrome(self, s: str) -> str:
        # Intialize a longest length palidrome as empty string
        palindrome = ""
        for i in range(len(s)):
            # Set j equal to i for generating the substrings after the ith pointer
            j=i
            # Iterate j till the end of string starting from where i is currently pointing to
            while j < len(s)+1:
                # Obtain the string starting at ith pointer and till jth pointer
                check = s[i:j]
                # Check if the reverse of that string is equal since it should be a palindrome
                # And check if that new string length is greater than existing
                # Since we want to find the longest length of palindrome
                if check == check[::-1] and len(check) > len(palindrome):
                    palindrome = check
                # Increment j pointer till it reaches end of the string
                j=j+1
            if len(palindrome) == len(s):
                return palindrome
        return palindrome