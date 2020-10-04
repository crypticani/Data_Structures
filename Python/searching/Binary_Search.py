def binary_search(arr, lower_limit, upper_limit, key):
    # basic check
    if upper_limit >= lower_limit:
        mid = (upper_limit + lower_limit) // 2

        # key is at the middle
        if arr[mid] == key:
            return mid

        # key is less than arr[mid]
        elif arr[mid] > key:
            return binary_search(arr, lower_limit, mid - 1, key)
        
        # key is greater than arr[mid]
        else:
            return binary_search(arr, mid + 1, upper_limit, key)

    else:
        # Element is not present in the array 
        return -1


num_elems = int(input('Enter the number of elements: '))

arr = []
print('Enter elements one by one')
for i in range(num_elems):
    arr.append(int(input()))

key = int(input('Enter the number to search for: '))

result = binary_search(arr, 0, num_elems - 1, key)
print(result)
