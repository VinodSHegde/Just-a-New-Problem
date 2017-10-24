#!/usr/bin/python

# Head ends here
def next_move(posr, posc, board):
    min=12
    for i in range(5):
        for j in range(5):
            if board[i][j]=="d":
                if (i==posr)&(j==posc):
                    print("CLEAN")
                    return 0
                if(posr>i):
                    r=posr-i
                else:
                    r=i-posr
                if j>posc:
                    c=j-posc
                else:
                    c=posc-j
                check=r+c
                if check<min:
                    min=check
                    mr,mc=i,j
    
    if (posr<mr):
        print ("DOWN")
        return 0  
    if (posr>mr):
        print ("UP")
        return 0
    if (posc<mc):
        print ("RIGHT")
        return 0  
    if (posc>mc):
        print ("LEFT")
        return 0       
    
    return 0  

# Tail starts here
if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(5)]
    next_move(pos[0], pos[1], board)

