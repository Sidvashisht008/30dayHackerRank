T=int(input())
A=[]
for i in range(1,T+1):
    S=input()
    A=A+[S]
for S in A:
    print(S[::2],S[1::2])
