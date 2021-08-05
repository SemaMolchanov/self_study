def binary_search(arr, target_value):
    #returns index if target value is found in list, else returns -1
    left = 0
    right = len(arr) - 1

    while left <= right:
        middle = (left + right)//2
        
        if arr[middle] == target_value:
            return middle
        elif arr[middle] < target_value:
            first = middle + 1
        else:
            last = middle - 1
        
    return -1

def verify(index):
    if index != -1:
        print('target value is found in the list at index:', index)
    else:
        print('target value is not found in the list')

numbers = list(map(int, input().split()))

target_value = int(input())

result = binary_search(numbers, target_value)

verify(result)