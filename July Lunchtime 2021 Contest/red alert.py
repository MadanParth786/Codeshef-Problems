# cook your dish here
try:
    n=int(input())
    for i in range(n):
        x,d,h=input().split(' ')
        x=int(x)
        d=int(d)
        h=int(h)
        a = list(map(int, input().split( )))
        sum = 0
        for j in range(len(a)):
            if(a[j]>0):
                sum+=a[j]
            else:
                if(sum<d):
                    sum=0
                else:
                    sum-=d
        
            if(sum>h):
                print("YES")
                break
        else:
            print("NO")
except:
    pass
