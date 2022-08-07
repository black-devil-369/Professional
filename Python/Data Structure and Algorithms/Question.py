def computeAverage():
    list1 = [5,4,2,6,1]
    sum = 0
    if( list1 != 0):
        for i in range(len(list1)):
            sum+=list1[i]
        average = sum/len(list1)
        print(average)
    else:
        return 0
computeAverage()