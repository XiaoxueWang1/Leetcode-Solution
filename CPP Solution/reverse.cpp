int reverse(int x) {
    long long ans = 0;
    int a=0;
    while(x){
        a = x%10;
        x /= 10;
        ans = ans*10+a;
    }
    return (ans>INT_MAX||ans<INT_MIN)?0:ans;
}
