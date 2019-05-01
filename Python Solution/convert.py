def convert(self, s, numRows):
    """
    :type s: str
    :type numRows: int
    :rtype: str
    """
    if numRows==1:
        return s
    strings=[""]*numRows
    row=0
    change=-1
    for i in range(len(s)):
        strings[row]+=s[i]
        if row==0 or row==(numRows-1):
            change = -1*change
        row += change
    ans=""
    for j in range(numRows):
        ans+=strings[j]
    return ans
