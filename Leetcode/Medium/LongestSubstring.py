## Longest Substring Without Repeating Characters

# **Problem Description:** Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/

# Given a string `s`, find the length of the longest substring without repeating characters.

# **Examples:**

# * **Example 1:**
#   ```
#   Input: s = "abcabcbb"
#   Output: 3
#   Explanation: The answer is "abc", with the length of 3.
#   ```

# * **Example 2:**
#   ```
#   Input: s = "bbbbb"
#   Output: 1
#   Explanation: The answer is "b", with the length of 1.
#   ```

# * **Example 3:**
#   ```
#   Input: s = "pwwkew"
#   Output: 3
#   Explanation: The answer is "wke", with the length of 3.
#   Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
#   ```

# **Constraints:**

# * `0 <= s.length <= 5 * 10^4`
# * `s` consists of English letters, digits, symbols and spaces.




class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n=len(s)
        mlen=0
        charset=set()
        left=0
        for i in range(n):
            if s[i] not in charset:
                charset.add(s[i])
                mlen=max(mlen,i-left+1)
            else:
                while s[i] in charset:
                    charset.remove(s[left])
                    left+=1
                charset.add(s[i])
        return mlen