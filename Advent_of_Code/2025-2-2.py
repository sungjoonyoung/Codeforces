def is_mirror(x):
    for parsing in range(1,len(x)):
        if len(x)%parsing!=0:continue
        op=True
        for i in range(0,len(x)//parsing-1):
            pre=x[i*parsing:(i+1)*parsing]
            suf=x[(i+1)*parsing:(i+2)*parsing]
            if pre!=suf :
                op=False
                break
        if op==True : return True
    return False

N=input().split(',')
# N=re.split('[,-]',input())
# print(N)
answer=0

for tmp in N:
    # print(tmp)
    prefix,suffix=tmp.split('-')
    # print(prefix, suffix)
    for i in range(int(prefix),int(suffix)+1):
        if is_mirror(str(i)):
            answer+=i

        

print(answer)