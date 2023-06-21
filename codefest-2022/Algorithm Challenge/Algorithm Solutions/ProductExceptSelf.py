def productExceptSelf(arr):
    rightarray = [0] * len(arr)
    output = [0] * len(arr)
    rightarray[len(arr)-1] = 1
    leftarray = [0] * len(arr)
    leftarray[0] = 1
    right = len(arr)-2


    while right >= 0:
        rightarray[right] = arr[right+1] * rightarray[right+1]
        right -=1
    print(rightarray)
    left = 1
    
    while left < len(arr):
        leftarray[left] = arr[left-1] * leftarray[left-1]
        left+=1
    print(leftarray)
    
    for num in range(len(arr)):
        output[num] = leftarray[num] * rightarray[num]
    print(output)


testList = [1,2,3,4]
productExceptSelf(testList)