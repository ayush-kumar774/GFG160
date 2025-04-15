def add_binary(s1, s2):
    i, j = len(s1) - 1, len(s2) - 1
    carry = 0
    res = []

    while i >= 0 or j >= 0 or carry:
        total = carry
        if i >= 0:
            total += int(s1[i])
            i -= 1
        if j >= 0:
            total += int(s2[j])
            j -= 1

        res.append(str(total % 2))
        carry = total // 2

    result = ''.join(res[::-1]).lstrip('0')
    return result if result else '0'

# Example calls
print(add_binary("1101", "111"))   # Output: 10100
print(add_binary("00100", "010"))  # Output: 1110
