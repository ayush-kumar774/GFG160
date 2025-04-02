def getSecondLargest(self, arr):
      n = len(arr)
      if n < 2 :
            return -1
      largest = secondLargest = -1

      for num in arr:
            if num > largest:
                  secondLargest = largest
                  largest = num
            elif num > secondLargest and num != largest:
                  secondLargest = num
      
      return secondLargest

print(getSecondLargest(None, [12, 35, 1, 10, 34, 1])) 
print(getSecondLargest(None, [10]))                  
print(getSecondLargest(None, [10, 10]))               
print(getSecondLargest(None, [-10, -20, -30]))        