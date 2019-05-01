def myAtoi(self, str: str) -> int:
    str=str.lstrip()
    if str=="":
        return 0
    a=0
    if str[0].isdigit() or str[0]=='-' or str[0]=='+':
        for i in range(len(str)):
            if not str[i].isdigit():
                if i!=0:
                    break
            else:
                a=a*10+int(str[i])
    if str[0]=='-':
        a=-1*a
    if a>2**31-1:
        a=2**31-1
    if a<-2**31:
        a=-2**31
    return a
