def findMedianSortedArrays(self, nums1, nums2):
    """
    :type nums1: List[int]
    :type nums2: List[int]
    :rtype: float
    """
    m = len(nums1)
    n = len(nums2)
    nums3=[]
    i=0
    j=0
    while (i<m) and (j<n):
        if nums1[i]<=nums2[j]:
            nums3.append(nums1[i])
            i+=1
        else:
            nums3.append(nums2[j])
            j+=1
    if i==m:
        nums3.extend(nums2[j:])
    else:
        nums3.extend(nums1[i:])
    lenA = len(nums3)
    if lenA%2==0:
        ans = nums3[int(lenA/2)] + nums3[int(lenA/2)-1]
        ans /= 2
    else:
        ans = nums3[int((lenA-1)/2)]
    return ans
