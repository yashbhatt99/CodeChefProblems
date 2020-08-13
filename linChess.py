"""
created on wed aug 11 13:32:52 2020
@auther: yash
"""


try:
    def linChess(a,k):
        p = -1
        pmax = float('inf')

        for i in range(len(a)):
            pawn = 0
            x = a[i]

            if x<k and k//2 >= x:
                if k%x==0:
                    pawn = k//x -1
                    if pmax>p:
                        pmax = p
                        p = x
        return player
    for i in range(int(input())):
        n,k = map(int,input().split())
        a = list(map(int,input().split()))
        print(linChess(a,k))

except:
    pass
