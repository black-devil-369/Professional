from re import I
import sys
A = [ 34,1,52,4,2,6,42]
for i in range(len(A)):
    min_ixd = i
    for j in range(i+1, len(A)):
        if A[min_ixd] > A[j]:
            min_ixd = j
    A[i],A[min_ixd] = A[min_ixd],A[i]
print("Sorted Arrays")
for i in range(len(A)):
    print("%d" %A[i],end="\n")