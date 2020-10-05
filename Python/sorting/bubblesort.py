def bubble_sort(array): 
    length = len(array) 
  
    for i in range(length): 
        for j in range(0, length - i - 1): 
            if array[j] > array[j+1] : 
                array[j], array[j+1] = array[j+1], array[j]

#array = [1,8,6,3,9,99,121,2,3]
#bubble_sort(array)
#print(array)

