for _ in range(int(input())):
    n = int(input())
    n0 = 0
    n1 = 0
    b = input()
    for i in range(len(b)):
        if b[i] == '1':
            n1+=1
        else:
            n0+=1
    if n&1:
        if n0&1:
            print("Campus nahi banega")
            continue
        else:
            print(min(n0, n1))
            continue
    else:
        if n0&1:
            print(n1)
            continue
        else:
            print(n0)
            continue
