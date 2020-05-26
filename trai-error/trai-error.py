import math


def heron( sd, s , count):
    x = math.sqrt(s*(s - sd[0])*(s - sd[1])*(s-sd[2]))    
    if x - math.floor(x) == 0.0:
        count += 1
        # print(sd[0], sd[1], sd[2])
    return count


def sfp( p ):
    val = 0
    sd = [0]*3
    for i in range( 1, p//2 + 1 ):
        sd[0] = i
        sd[1] = 0
        #print('dbg')
        while( (sd[1] + sd[0]) < p  ):
            #print(sd[1], p)
            sd[1] += 1
            sd[2] = p - sd[0] - sd[1]
            if (sd[0] + sd[1] <= sd[2]) or (sd[2] + sd[1] <= sd[0]) or (sd[0] + sd[2] <= sd[1]):
                #sd[1] += 1
                continue
            if sd[0] <= sd[1] and sd[1] <= sd[2]:
                #sd[1] += 1
                val = heron( sd, p//2 , val)
    return val


for _ in range(int(input())):
     p = int(input())
     #count=0
     count=sfp(p)
     print(count)