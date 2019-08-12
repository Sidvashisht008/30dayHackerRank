n=int(input())
A=list(map(int,input().split()))
m=0
for i in range(0,len(A)):
    for j in range(i,len(A)):
        if(A[j]<A[i]):
            temp=A[j]
            A[j]=A[i]
            A[i]=temp
            m+=1
print("Array is sorted in",m,"swaps.",sep=" ")
print("First Element:",A[0],sep=" ")
print("Last Element:",A[len(A)-1],sep=" ")
