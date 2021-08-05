def sum(arr):
    result = 0
    for num in arr:
        result += num
    return result

numbers = list(map(int, input().split()))

print(sum(numbers))