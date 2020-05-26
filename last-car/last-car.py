for _ in range(int(input())):
    l, n = list(map(int, input().split()))
    c = input().split()
    d = [-int(x) if x[0]=='-' else l-int(x) for x in c]
    print(max(d))
