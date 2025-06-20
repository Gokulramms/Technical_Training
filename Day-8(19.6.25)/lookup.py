n=5
start="1"
print(start)
for i in range(n-1):
    next=""
    count=1
    for j in range (1,len(start)):
        if start[j]==start[j-1]:
            count+=1
        else:
            next+=str(count)+start[j-1]
            count=1
    next+=str(count)+start[-1]
    print(next)
    start=next

