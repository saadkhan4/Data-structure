nums = [2,7,11,15]
target = 9


def two_sums(nums, target):
    seen = {}
    for i in range(len(nums)):
        diff = target - nums[i]    
        if diff in seen:
            return [seen[diff],i]   # Agar diff pehle se dictionary mein hai, to yeh uske index (jo seen[diff] mein store hai) aur current index i ko return kar dega.
        else:
            seen[nums[i]] = i      # 	•	Agar diff dictionary mein nahi milta, to hum current number nums[i] ko dictionary mein store kar lete hain aur uska index i uske saath rakhte hain.


result = two_sums(nums, target)
print(result)
            