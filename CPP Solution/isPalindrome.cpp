bool isPalindrome(int x) {
    if(x<0) return false;
    int n = x, a = 0;
    while(n!=0){
        a=a*10+n%10;
        n/=10;
    }
    if(a==x) return true;
    return false;
}
