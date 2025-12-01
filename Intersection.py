def intersection(a,b):
    result=[]
    b=set(b)
    for i in a:
        if i in b and i not in  result:
            result.append(i)
            
    print(result)
intersection(a=[1,2,3,4],b=[2,3])