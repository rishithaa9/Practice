from numpy.random import uniform

def binomial_rv(n, p):
    count = 0
    for _ in range(n):
        if uniform(0, 1) < p:
            count += 1
    return count

# Example usage
n = 10  
p = 0.5 
print(binomial_rv(n, p))
