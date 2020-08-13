try:   
    def chefWars(h,p):
        if p>=h:
            return 1
        while(p!=0 and h!=0):
            
            if h>p:
                h-=p
            else:
                h=0
            p//=2
        if h>0:
            return 0
        else:
            return 1
    
    for i in range(int(input())):
        h,p = map(int,input().split())
        print(chefWars(h,p))
except:
    pass
