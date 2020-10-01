def linear_search(key,nums):
    for i in range(len(nums)):
        if(nums[i] == key):
            return i
    return -1

#Storing numbers 
Numbers = [1,50,65,7,2,6]
#Taking input the number to be search
key = int(input("Enter the number to search :"))
position = linear_search(key,Numbers)
if(position != -1):
    print("Number is present at position " + str(position) +  " Index position")
else:
    print("Number is not present")
