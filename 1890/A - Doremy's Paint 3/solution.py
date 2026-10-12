test_cases = int(input())
for i in range(0,test_cases):
    l = int(input())
    array = input().split(' ')
    dict = {}
    if len(array) == 2:
        print("Yes")
        continue
    s = set(array)
    if len(s) == 1:
        print("Yes")
        continue
    if len(s) != 2:
        print("No")
        continue
    else:
        traget = array[0]
        c = 0
        for j in array:
            
                if j == traget:
                    c += 1
        if l % 2 == 0 and l//2-c == 0:
             
             print("Yes")
             continue
        elif l % 2 == 1 and ((l//2) -c == 0 or (l//2 + 1) - c == 0 ):
            print("Yes")
            continue
        else:
             print("NO")
             continue