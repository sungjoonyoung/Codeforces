def is_mirror(x):
    if len(x)%2==1 : return False
    prefix=x[:len(x)//2]
    suffix=x[len(x)//2:]
    return prefix==suffix

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