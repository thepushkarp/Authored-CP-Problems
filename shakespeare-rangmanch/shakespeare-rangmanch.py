import math

for _ in range(int(input())):
    a, b = list(map(int, input().split()))
    lg = (int)(math.pow(3, math.ceil(math.log(a) / math.log(3))))
    oneone = 2*b + 1
    if oneone >= lg:
        if (int)(math.pow(3, math.floor(math.log(oneone) / math.log(3)))) == oneone:
            print("I defy you, stars")
        else:
            print("These violent delights have violent ends")
    else:
        print("These violent delights have violent ends")
