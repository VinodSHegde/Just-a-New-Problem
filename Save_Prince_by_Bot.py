#!/usr/bin/python
def displayPathtoPrincess(n,grid):
    c=0
    for i in range(m):
        for j in range(m):
            if c==2:
                break
            if grid[i][j]=='m':
                ma,mb=i,j
                c+=1
            if grid[i][j]=='p':
                pa,pb=i,j
                c+=1
    if ma<pa:
        for i in range(pa-ma):
            print("DOWN"),
        ma=pa
    if (ma>pa):
        for i in range(ma-pa):
            print("UP"),
        ma=pa
    if (pb<mb):
        for i in range(mb-pb):
            print("LEFT"),
        mb=pb
    if (pb>mb):
        for i in range(pb-mb):
            print("RIGHT"),
        mb=pb
        
#print all the moves here
m = int(input())
grid = [] 
for i in range(0, m): 
    grid.append(input().strip())

displayPathtoPrincess(m,grid)
