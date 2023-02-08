
def sum(x):
    if x == 0:
        return 0
    else:
        return x + sum(x-1)
    
    
SumVal = sum(5)
print(SumVal)