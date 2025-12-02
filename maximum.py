def maximum(a):
    product=[]
    max_value=float('-inf')
    for i in range(len(a)-1):
        for j in range(i+1,len(a)):
            product=a[i]*a[j]
            if product>max_value:
                max_value=product
                
    print(max_value)
maximum([1,3,4,7])