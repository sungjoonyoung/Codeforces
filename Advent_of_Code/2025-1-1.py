N=50
answer=0
while 1:
    str=input()
    tmp=int(str[1:])
    # print(tmp)
    if str[0]=='L':
        N+=100
        N-=tmp
        N%=100
    else :
        N+=tmp
        N%=100
    if N==0 :
        answer+=1
    print(answer)
