import sys
def insertionsort(arr):
    for i in range(1,len(arr)):
        key = arr[i]
        j = i-1
        while j>=0 and key<arr[j]:
            arr[j+1] = arr[j]
            j-=1
        arr[j+1] = key
arr = [34,24,6,45,324,34,1,43,7]
insertionsort(arr)
print("Sorted Arrays")
for i in range(len(arr)):
    print("%d" %arr[i],end =" ")
            