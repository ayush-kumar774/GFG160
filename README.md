<h1 align="center">💻 160 Days of DSA Challenge (GfG x 4 Languages)</h1>
<p align="center">
  Solving one DSA problem daily for 160 days in Java, C++, Python, and JavaScript.<br/>
  Sharing intuition, approach, and code — one day at a time ✨
</p>

<p align="center">
  <a href="https://x.com/AayushKumarCode"><img src="https://img.shields.io/twitter/follow/AayushKumarCode?style=social" /></a>
  <img src="https://img.shields.io/badge/Day-17-brightgreen" />
  <img src="https://img.shields.io/badge/Challenge-%23160DaysOfCode-blueviolet" />
</p>

---

## 📚 What’s Inside This Repo

- 📌 160 curated DSA problems from GeeksforGeeks
- 💡 Explained with intuition + clean approach
- 🧠 Solved in **Java, C++, Python, JavaScript**
- 🚀 Updated daily with commit history as a timeline
- 🎯 Personal learning journey + public reference guide

---

## 📈 Progress Tracker

> Problems solved so far: 17 / 160  
> Scroll down to see Day-wise logs!

---

## ✅ Day-wise Journal

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

### 🟢 Day 12

**🤩 Problem Statement:**  
Find the maximum subarray sum in a circular array.

**💭 Intuition:**  
In circular arrays, the max subarray is either:

- a normal max (Kadane), OR  
- a wrap-around = total sum - min subarray sum

**🛠️ Approach:**  
Run Kadane's to get max subarray normally.  
Then, compute total sum - min subarray (also using Kadane logic).  
Return the greater of the two.  
Edge Case: if all elements are negative, return max alone.  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:**  
Java, C++, Python, JavaScript ✅

---

### 🟢 Day 13

**🤩 Problem Statement:**  
Find the smallest positive number missing from the array.

**💭 Intuition:**  
Each positive integer `x` should ideally be placed at index `x - 1`.  
If we rearrange the array using this logic, the first index `i` where `arr[i] != i + 1` gives us the missing number.

**🛠️ Approach:**  
Use in-place hashing (cycle-sort style):  

- Swap elements to their correct index positions
- After rearrangement, scan to find the first missing number
Edge Case: If all are in correct position → answer is `n + 1`  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:**  
Java, C++, Python, JavaScript ✅

---

### 🟢 Day 14

**🤩 Problem Statement:**  
Implement the classic `atoi()` function to convert a string to an integer without using built-in functions.

**💭 Intuition:**  
Handle:

- Leading whitespaces  
- Optional '+' or '-' sign  
- Continuous digits  
- Cut off at first non-digit  
Also check for **overflow** and return INT_MAX / INT_MIN accordingly.

**🛠️ Approach:**

- Skip leading spaces  
- Identify and store sign  
- Parse digits one by one  
- Check overflow *before* multiplying  
- Multiply by sign and return  

Time: O(n) | Space: O(1)

**💻 Languages Solved In:**  
Java, C++, Python, JavaScript ✅

---

### 🟢 Day 15

**🤩 Problem Statement:**  
Given two binary strings `s1` and `s2`, return their sum as a binary string (with no leading zeros).

**💭 Intuition:**  
Binary addition is just like regular addition but in base 2.  
Start from the end, add digits with carry, and handle any overflow.  
Finally, remove leading zeros.

**🛠️ Approach:**  

- Use two pointers from the end of both strings  
- Maintain a carry  
- Keep appending `sum % 2` and updating carry with `sum / 2`  
- Reverse the string at the end  
- Trim leading zeros (edge case: if all are zero, return `"0"`)  

Time: O(max(n, m)) | Space: O(max(n, m))

**💻 Languages Solved In:**  
Java, C++, Python, JavaScript ✅

---

### 🟢 Day 16

**🤩 Problem Statement:**  
Check whether two given strings are anagrams of each other.

**💭 Intuition:**  
Two strings are anagrams if the frequency of every character matches.  
Instead of sorting, use a frequency array of size 26 and compare.

**🛠️ Approach:**  

- Traverse both strings in one loop  
- For each char in s1 → increment its count  
- For each char in s2 → decrement its count  
- In the end, check if all frequencies are 0  
Time: O(n) | Space: O(1)

**💻 Languages Solved In:** Java, C++, Python, JavaScript ✅

---

### 🟢 Day 17

**🤩 Problem Statement:**  
Given a lowercase string, return the first non-repeating character. If none exists, return '$'.

**💭 Intuition:**  
We can solve this in 2 passes:

- 1st pass: count frequencies in a size-26 array
- 2nd pass: return the first character with count = 1

**🛠️ Approach:**  

- Use a frequency array `freq[26]`
- Traverse once to count
- Traverse again to return the first char with freq 1  
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

---
