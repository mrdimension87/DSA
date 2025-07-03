class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        po=[]
        ne=[]
        for i in nums:
            if(i>0):
                po.append(i)
            else:
                ne.append(i)
        for i in range(len(nums)//2):
            nums[2*i]=po[i]
            nums[2*i+1]=ne[i]
        return nums