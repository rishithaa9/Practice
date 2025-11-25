def array(a):
    temp={}
    count=0
    for i in a:
        if i in temp:
            temp[i]+=1
        else:
            temp[i]=1
    for i in temp:
        if temp[i]==1:
            print(i)
            return
array([1,2,3,2,3])