t = int(input())
while t > 0 :
    n = int(input())
    v = list(map(int,input().strip().split()))
    sum = 0
    for i in range(len(v)) :
        sum += v[i]
    print(sum - len(v) + 1)
    t-=1