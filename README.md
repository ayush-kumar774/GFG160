# 🧠 GeeksforGeeks 160 Day DSA Challenge

Welcome to my journey through the **#gfg160** challenge by @geeksforgeeks!  
📅 Goal: Solve 1 DSA problem daily for 160 consecutive days  
🎯 Mission: Master problem-solving and build a rock-solid streak  

---

## 📈 Progress Tracker

### 🟢 Day 1

**🤩 Problem Statement:**  
Find the second largest element in an array.

**💭 Intuition:**  
We need to track the two highest numbers while scanning once — no sorting or nested loops.

**🛠️ Approach:**  
Loop once through the array. Maintain two variables: `largest` and `secondLargest`. Update both when a new max is found.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 2

**🤩 Problem Statement:**  
Push all zeros to the end of the array while maintaining the order of other elements.

**💭 Intuition:**  
Use two pointers — one for tracking non-zero insert position, the other to scan the array.

**🛠️ Approach:**  
Swap every non-zero element forward into its correct position, shift zeros naturally.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 3

**🤩 Problem Statement:**  
Reverse an array in-place.

**💭 Intuition:**  
Swap elements from both ends towards the center — no need for extra space.

**🛠️ Approach:**  
Two-pointer approach: one from start, one from end, and swap until they meet.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 4

**🤩 Problem Statement:**  
Rotate array left by `d` positions.

**💭 Intuition:**  
Breaking and shifting manually is tricky, but reversing segments is clean.

**🛠️ Approach:**  
Reverse first d elements, reverse remaining, then reverse whole array.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 5

**🤩 Problem Statement:**  
Find the next lexicographic permutation of an array.

**💭 Intuition:**  
Find a pivot where order breaks, then adjust right-side to be smallest larger permutation.

**🛠️ Approach:**  
Find the first `i` where arr[i] < arr[i+1], then find just larger, swap, reverse suffix.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 6

**🤩 Problem Statement:**  
Find all elements appearing more than n/3 times.

**💭 Intuition:**  
There can be at most 2 such elements. Use a voting mechanism to track candidates.

**🛠️ Approach:**  
Extended Boyer-Moore Voting Algorithm. Select up to 2 candidates, verify counts.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 7

**🤩 Problem Statement:**  
Maximize profit by buying/selling stock multiple times.

**💭 Intuition:**  
Profit is found in every upward slope between days.

**🛠️ Approach:**  
Whenever prices[i] > prices[i-1], add the difference to profit.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 8

**🤩 Problem Statement:**  
Max profit with only one buy-sell operation allowed.

**💭 Intuition:**  
Buy at the lowest so far, sell at the current if it's more profitable.

**🛠️ Approach:**  
Track `minPriceSoFar`, and update `maxProfit = max(maxProfit, price - minPriceSoFar)`  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 9

**🤩 Problem Statement:**  
Minimize the difference between tallest and shortest towers after +/-K.

**💭 Intuition:**  
Try increasing the short and decreasing the tall towers. Sort to simplify.

**🛠️ Approach:**  
Sort array. Try cutting at every i, and update potential min/max bounds.  
Time: O(n log n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 10

**🤩 Problem Statement:**  
Find max sum of contiguous subarray (can be negative too).

**💭 Intuition:**  
If the current sum goes negative, restart. Else keep adding.

**🛠️ Approach:**  
Kadane's Algorithm: maintain `maxSoFar` and `currentMax`.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 11

**🤩 Problem Statement:**  
Find the contiguous subarray with maximum product.

**💭 Intuition:**  
Negative numbers can flip max ↔ min. Track both.

**🛠️ Approach:**  
Keep `maxSoFar`, `minSoFar`. On negative input, swap both.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

## 🔗 Follow My Daily Updates

📍 X (Twitter): [Aayush Kumar](https://x.com/AayushKumarCode)  
🔖 Hashtags: `#gfg160` `#geekstreak2025` `#160DaysOfCode`  

---

## 🚀 How to Start Your Own Streak?

1. Visit: [GeeksforGeeks DSA Challenges](https://practice.geeksforgeeks.org/explore?page=1&sortBy=submissions)
2. Solve one problem daily.
3. Post your solution on X or LinkedIn using hashtags.
4. Track progress here or on your blog!

---

## 👨‍💻 Author

Made with ❤️ by [Aayush Kumar](https://github.com/ayush-kumar774)
