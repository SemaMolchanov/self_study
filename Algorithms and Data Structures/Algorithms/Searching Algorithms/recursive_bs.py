def binary_search(lst, target_value):
    #returns index if target value is found in list, else returns -1
    first = 0
    last = len(lst) - 1

    while first <= last:
        middle = (first + last)//2
        
        if lst[middle] == target_value:
            return middle
        elif lst[middle] < target_value:
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