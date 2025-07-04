class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        list1=list(map(str,s.split()))
        return len(list1[len(list1)-1])