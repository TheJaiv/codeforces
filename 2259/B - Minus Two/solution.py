test_cases = int(input())
for i in range(0,test_cases):
    n = int(input())
    nums = list(map(int , input().split(' ')))
    rem1 = 0
    rem2_odd = 0
    rem2_even = 0
    for i in nums:
        
        if i % 2 != 0:
            rem1 +=  1
            
        else:
            
            if (i / 2)%2 == 0:
                rem2_even += 1
            else:
                rem2_odd += 1
    
    print(max(rem1,rem2_odd,rem2_even))