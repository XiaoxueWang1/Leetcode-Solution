string longestPalindrome(string s) {
    int n = s.size();
    bool P[1000][1000]={false};
    int maxL=1,start=0;
    for(int i=0;i<n;i++)
        for(int j=i;j>=0;j--)
            if(s.at(i)==s.at(j)&&(i-j<2||P[j+1][i-1])){
                P[j][i]=true;
                if(i-j+1>maxL){
                    start = j;
                    maxL = i-j+1;
                }
            }
    return s.substr(start,maxL);
}
