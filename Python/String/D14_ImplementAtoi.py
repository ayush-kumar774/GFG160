def my_atoi(s):
    i = 0
    n = len(s)
    sign = 1
    ans = 0

    while i < n and s[i] == ' ':
        i += 1

    if i < n and (s[i] == '+' or s[i] == '-'):
        sign = -1 if s[i] == '-' else 1
        i += 1

    while i < n and s[i].isdigit():
        digit = int(s[i])
        if ans > (2**31 - 1 - digit) // 10:
            return 2**31 - 1 if sign == 1 else -2**31
        ans = ans * 10 + digit
        i += 1

    return ans * sign


print(my_atoi("   -42"))         
print(my_atoi("4193 with words")) 
