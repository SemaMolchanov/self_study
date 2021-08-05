def sum(arr):
    if len(arr) == 0:
        return 0
    return arr[0] + sum(arr[1:])

numbers = list(map(int, input().split()))

print(sum(numbers))