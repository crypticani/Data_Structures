def merge_sort(array):
    if len(array) > 1:
        mid = len(array) // 2
        left_array = array[:mid]
        right_array = array[mid:]
        
        merge_sort(left_array)
        merge_sort(right_array)
        
        i = j = k = 0
        while i < len(left_array) and j < len(right_array): 
            if left_array[i] < right_array[j]: 
                array[k] = left_array[i] 
                i += 1
            else: 
                array[k] = right_array[j] 
                j += 1
            k += 1
        
        while i < len(left_array): 
            array[k] = left_array[i] 
            i += 1
            k += 1
          
        while j < len(right_array): 
            array[k] = right_array[j] 
            j += 1
            k += 1

#array = [1,8,6,3,9,99,121,2,3]
#merge_sort(array)
#print(array)

