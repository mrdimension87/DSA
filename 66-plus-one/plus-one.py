class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        for i in range(len(digits)):
            digits[i]=str(digits[i])
        n=int("".join(digits))
        n=n+1
        list1=[]
        for i in str(n):
            list1.append(int(i))

        return list1
