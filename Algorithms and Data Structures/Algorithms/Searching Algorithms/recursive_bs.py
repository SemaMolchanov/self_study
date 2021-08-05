def binary_search(arr, target_value, left, right):
    if left <= right:
        middle = (left + right)//2
        if arr[middle] == target_value:
            return middle
        elif arr[middle] < target_value:
            return binary_search(arr, target_value, middle + 1, right)
        elif arr[middle] > target_value:
            return binary_search(arr, target_value, left, middle - 1)
    return -1

def verify(index):
    if index != -1:
        print('target value is found in the list at index:', index)
    else:
        print('target value is not found in the list')

numbers = list(map(int, input().split()))

target_value = int(input())

result = binary_search(numbers, target_value, 0, len(numbers) - 1)

verify(result)