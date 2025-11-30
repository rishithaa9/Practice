def move_zeros_toend(s):
    result=[]
    zero=0
    for i in s:
        if i!=0:
            result.append(i)
        else:
            zero+=1
    result+=[0]*zero
    print(result)
s=[1,0,2,0,3]
move_zeros_toend(s)