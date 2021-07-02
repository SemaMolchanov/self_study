def linear_search(lst, target_value):
    #returns index if target value is found in list, else returns -1
    for i in range(len(lst)):
        if lst[i] == target_value:
            return i
    return -1

def verify(index):
    if index != -1:
        print('target value is found in the list at index:', index)
    else:
        print('target value is not found in the list')

numbers = list(map(int, input().split()))

target_value = int(input())

result = linear_search(numbers, target_value)

verify(result)