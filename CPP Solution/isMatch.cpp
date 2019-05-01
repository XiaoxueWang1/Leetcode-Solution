bool isMatch(string s, string p) {
    /**b[i][j] i:len of s, j:len of p
     * b[i + 1][j + 1]: if s[0..i] matches p[0..j]
     * if p[j] != '*'
     * b[i + 1][j + 1] = b[i][j] && s[i] == p[j]
     * if p[j] == '*', denote p[j - 1] with x,
     * then b[i + 1][j + 1] is true if any of the following is true
     * 1) "x*" repeats 0 time and matches empty: b[i + 1][j -1]
     * 2) "x*" repeats 1 time and matches x: b[i + 1][j]
     * 3) "x*" repeats >= 2 times and matches "x*x": s[i] == x && b[i][j + 1]
     * '.' matches any single character
     */
    bool b[50][50]={false};
    b[0][0]=true;
    int pLen=p.length(), sLen=s.length();
    if(p!="" && p[0]=='*') b[0][1]=true;
    for(int i=1;i<pLen;i++)
        if('*' == p[i])
            b[0][i+1]=b[0][i-1];
    for(int i=0;i<sLen;i++)
        for(int j=0;j<pLen;j++){
            if(s[i]==p[j]||p[j]=='.')
                b[i+1][j+1]=b[i][j];
            else if(p[j] == '*')
                b[i+1][j+1]=(b[i][j+1]&&(j>0)&&(s[i]==p[j-1]||'.'==p[j - 1]))||
                    b[i+1][j]||(b[i+1][j-1]&&(j>0));
        }
    return b[sLen][pLen];
}
