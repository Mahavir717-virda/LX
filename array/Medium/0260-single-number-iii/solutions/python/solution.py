class Solution:

    def singleNumber(self, nums: list[int]) -> list[int]:
        xr = 0
        for num in nums:
            xr ^= num

        diff = xr & (-xr)

        a, b = 0, 0
        for num in nums:
            if num & diff:
                a ^= num
            else:
                b ^= num

        return [a, b]
