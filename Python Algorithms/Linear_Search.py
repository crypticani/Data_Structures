def linear_search(key,nums):
    for i in range(len(nums)):
        if(nums[i] == key):
            return i
    return -1

#Storing numbers 
print("Enter how many numbers you want to store in list : ")
n = int(input())
numslist = []
print("Enter the numbers : ")
for p in range(n):
    ele = int(input())
    numslist.append(ele)
#Taking input the number to be search
key = int(input("Enter the number to search :"))
position = linear_search(key,numslist)
if(position != -1):
    print("Number is present at " + str(position) +  " index position")
else:
    print("Number is not present")
