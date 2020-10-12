# Remove-Duplicate-letter-Leetcode-solution-
# Explanation:  
Find the index of last occurrence for each character.  
Use a stack to keep the characters for result.  
Loop on each character in the input string S,  
if the current character is smaller than the last character in the stack,  
and the last character exists in the following stream,  
we can pop the last character to get a smaller result.  


# Time Complexity:  
We loop for n times so Time complexity will be O(N)  
# Space Complexity:  
Space O(26),No vaiable space was used
