N=50
answer=0
while 1:
    str=input()
    tmp=int(str[1:])
    answer+=tmp//100
    tmp%=100
    if str[0]=='L':
        N-=tmp
        if N<0 and N!=-tmp: answer+=1
        N+=100
        N%=100
    else :
        N+=tmp
        if N>100 : answer+=1
        N%=100
    if N==0 :
        answer+=1
    print(answer)
