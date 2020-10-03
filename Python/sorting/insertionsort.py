def insertionSort(A):
    for i in range(1,len(A)):
        insert(A[i],A,i)

def insert(v, A, hi):
    for i in range(hi-1,-1,-1):
        if v >= A[i]:
            A[i+1] = v
            return
        A[i+1] = A[i]
    A[0] = v

#print(insertionSort([1,8,6,3,9,99,121,2,3]))
