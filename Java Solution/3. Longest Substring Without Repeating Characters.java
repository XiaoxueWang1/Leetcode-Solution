class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> myset = new HashSet<>();
        int num=0,i=0,j=0;
        while(i<s.length() && j<s.length()){
            if(!myset.contains(s.charAt(j))){
                myset.add(s.charAt(j++));
            }
            else{
                num =  Math.max(num, j - i);
                myset.remove(s.charAt(i++));
            }
        }
        num =  Math.max(num, j - i);
        return num;
    }
}
