def second_smallest(arr):
    small = float('inf')
    second = float('inf')
    for x in arr:
        if x < small:
            second = small
            small = x
        elif x != small and x < second:
            second = x
    if second == float('inf'):
        print("No second smallest")
    else:
        print(second)
arr = [5, 2, 8, 1, 6]
second_smallest(arr)