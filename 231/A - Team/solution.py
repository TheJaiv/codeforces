n = int(input())
count = 0
for _ in range(n):
    if sum(map(int, input().split())) >= 2:
        count += 1
print(count)