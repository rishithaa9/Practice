def unique_elements(s):
    count={}
    for i in s:
        if i in count:
            count[i]+=1
        else:
            count[i]=1
    for j in s:
        if count[j]==1:
            print(j)
s=[1,2,3,4,5,1,2]
unique_elements(s)