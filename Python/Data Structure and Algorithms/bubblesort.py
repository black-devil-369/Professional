import sys
def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
                if arr[j] > arr[j+1]:
                    arr[j] , arr[j+1] = arr[j+1], arr[j]
arr = [53,2,64,62,1,73,72,45,24,355,73]
bubbleSort(arr)
print("Sorted Arrays")
for i in range(len(arr)):
    print("%d" %arr[i],end = "  ")