# Bubble sort in Python

def bubbleSort(array):
    for i in range(len(array)):
        swapped = False
        for j in range(0, len(array) - i - 1):
            if array[j] > array[j + 1]:
                temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp
        
                swapped = True
        if not swapped:
            break

print('Enter Array: ')
data = list(map(int, input().split()))

bubbleSort(data)

print('Sorted Array in Ascending Order: ')
print(data)
