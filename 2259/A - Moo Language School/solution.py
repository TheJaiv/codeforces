test_cases = int(input())
for i in range(0,test_cases):
    a = input().split(' ')
    farms = input()
    score = 0
    for i in range(0, int(a[0]) , int(a[1])):
        if "0" not in farms[i:i+int(a[1])]:
            score +=1 
       
    print(score)