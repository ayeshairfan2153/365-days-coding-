'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
arr=[1,2, 3,4,5,6,7,8,9,10]
for i in range(0,5,1):
    temp=arr[i]
    arr[i]=arr[10-i-1]
    arr[10-i-1]=temp
    
print(arr)