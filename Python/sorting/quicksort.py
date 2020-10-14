def partition(array, low, high):    
    i = low - 1
    pivot = array[high]
 
    for j in range(low, high):
        if array[j] <= pivot:
            i = i + 1
            array[i], array[j] = array[j], array[i]

    array[i + 1], array[high] = array[high], array[i + 1]
    return i + 1

def quick_sort(array, low, high):
    if len(array) == 1:
        return array

    if low < high:
        part_index = partition(array, low, high)
        quick_sort(array, low, part_index - 1)
        quick_sort(array, part_index + 1, high)

#array = [1,8,6,3,9,99,121,2,3]
#quick_sort(array, 0, 8)
#print(array)

