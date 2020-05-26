import sys
from collections import deque

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline()) # Input n
    population = sys.stdin.readline() # Input population binary string
    pop = [int(population[i]) for i in range(n)] # Convert population bitstring to int array
    connec = [1 for i in range(n)] # Connection bitstring

    d = int(sys.stdin.readline()) # Number of days to isolate
    isol = list(map(int, sys.stdin.readline().split())) # for every i, person i isolates from person i-1

    q = deque() # Stores currently infected people
    if pop[0] == 1 and pop[1] == 0:
        q.append(0)
    for i in range(1, n-1):
        if pop[i] == 1 and (pop[i-1] == 0 or pop[i+1] == 0):
            q.append(i)
    if pop[n-1] == 1 and pop[n-2] == 0:
        q.append(n-1)

    q.append(-1)

    for i in range(d):
        connec[isol[i] - 1] = 0
        if q[0] == -1:
            break
        else:
            while q[0] != -1:
                front = q[0]
                if front > 0 and pop[front-1] == 0 and connec[front] == 1:
                    pop[front-1] = 1
                    if front > 1:
                        if pop[front-2] == 0 and connec[front-1] == 1:
                            q.append(front-1)
                if front < n-1 and pop[front+1] == 0 and connec[front+1] == 1:
                    pop[front+1] = 1
                    if front < n-2:
                        if pop[front+2] == 0 and connec[front+2] == 1:
                            q.append(front+1)
                q.popleft()

            q.append(-1)
            q.popleft()


    print(pop.count(1))
