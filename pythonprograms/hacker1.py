def first_missing_positive(nums):
    """
    Finds the smallest missing positive integer in an unsorted array.

    Args:
        nums: An unsorted array of integers.

    Returns:
        The smallest missing positive integer.
    """
    for i in range(len(nums)):
        while 1 <= nums[i] <= len(nums) and nums[i] != i + 1:
            j = nums[i] - 1
            if nums[i] == nums[j]:
                break
            nums[i], nums[j] = nums[j], nums[i]

    for i in range(len(nums)):
        if nums[i] != i + 1:
            return i + 1
    return len(nums) + 1

# Example usage
a = int(input(""))
nums=[]
for i in range (0,a):
    b=int(input(""))
    nums.append(b)
    
missing = first_missing_positive(nums)
print(missing)
# print(f"The smallest missing positive integer is: {missing}")
