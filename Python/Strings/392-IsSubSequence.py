class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        index=0

        if (len(s)>len(t)):
            return False
        for char in t:
            if (index<len(s) and char==s[index]):
                index+=1
        if (index==len(s)):
            return True
        else:
            return False