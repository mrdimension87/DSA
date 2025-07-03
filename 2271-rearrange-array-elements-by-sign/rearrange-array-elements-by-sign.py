class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        pos=[]
        neg=[]
        for i in nums:
            if(i>0):
                pos.append(i)
            else:
                neg.append(i)
        for i in range(len(nums)//2):
            nums[2*i]=pos[i]
            nums[2*i+1]=neg[i]
        return nums