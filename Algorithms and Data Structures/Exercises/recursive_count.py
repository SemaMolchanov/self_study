def count(arr):
    if arr == []:
        return 0
    return 1 + count(arr[1:])

numbers = list(map(int, input().split()))
print(count(numbers))