test_cases = int(input())
for i in range(0,test_cases):
    n = int(input())
    nums = list(map(int , input().split(' ')))
 
 
 
    for i in range(0,n):
        if nums[i] == 1:
            break
        if nums[i] == -1 :
            nums[i] = 1
            break
    for i in range(n-1,0 , -1):
        if nums[i] == 1:
            break
        if nums[i] == -1 :
            nums[i] = 1
            break
    # ones = []
    # negatives = []
    # for i in range(0,n):
    #     if nums[i] == 1:
    #         ones.append(i)
    #     if nums[i] == -1:
    #         negatives.append(i)
    
 
    # if len(ones) == 0:
    #     if len(negatives) > 0:
    #         nums[negatives[0]] = 1
    #         nums[negatives[-1]] = 1
    # else:
    #     for i in negatives:
    #         if len(negatives) == 1:
    #             if i < ones[0]:
    #                 nums[i] = 1
    #             elif i > ones[-1]:
    #                 nums[i] = 1
    #         elif i < ones[0] or i > ones[-1]:
    #             nums[i] = 1
 
    # elif len(ones) == 1 and len(negatives) >= 1:
        
    #     if negatives[0] < ones[0]:
    #         nums[negatives[0]] = 1
    #     if negatives[-1] > ones[0]:
    #         nums[negatives[-1]] = 1
    # elif len(ones) > 1 and len(negatives) >= 1:
    #     if negatives[0] < ones[0]:
    #         nums[negatives[0]] = 1
    #     elif negatives[-1] > ones[-1]:
    #         nums[negatives[-1]] = 1
    #         # print(negatives[-1])
    #         # print('hi')
    #         # print(nums)
    #         # print("hi")
        # if len(ones) == 0 and len(negatives) == 1:
            
        #     nums[negatives[0]] = 1
 
 
 
    
    # if len(ones) == 1:
        
    #     max_diff = 0
    #     pos = 0
    #     for i in negatives:
    #         diff = abs(i-ones[0])
    #         if diff> max_diff:
    #             max_diff = diff
    #             pos = i
    #     nums[pos] = 1
    # else:
    #     max_diff = 0
    #     lower = 0
    #     upper = 0
    #     for i in range(1,len(ones)):
    #         diff = ones[i] - ones[i-1]
    #         if diff> max_diff:
    #             max_diff = diff
    #             lower = i-1
    #             upper = i
    #     min_diff = n+1
    #     l = 0
    #     for i in negatives:
    #         # print("hi")
    #         for j in ones:  
    #             if abs(i-j) < min_diff:
    #                 min_diff = abs(i-j)
    #                 # print(min_diff ,  i)
 
    #                 l = i
 
            
    #     actual = max(min_diff,max_diff)
    #     if min_diff > max_diff:
    #         # print("hellp")
    #         nums[l] = 1
 
    for i in range(0,n):
        if nums[i] == -1:
 
            nums[i] =0 
    print(' '.join(list(map(str, nums))))