# Insertion sort in Python

def insertionSort(array):

    for step in range(1, len(array)):
        key = array[step]
        j = step - 1

        while j >= 0 and key < array[j]:
            array[j + 1] = array[j]
            j = j - 1
        
        array[j + 1] = key

print('Enter Array: ')
data = list(map(int, input().split()))
insertionSort(data)
print('Sorted Array in Ascending Order:')
print(data)
