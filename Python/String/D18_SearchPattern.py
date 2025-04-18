def computeLPS(pat):
    lps = [0] * len(pat)
    length = 0
    i = 1

    while i < len(pat):
        if pat[i] == pat[length]:
            length += 1
            lps[i] = length
            i += 1
        else:
            if length != 0:
                length = lps[length - 1]
            else:
                lps[i] = 0
                i += 1
    return lps


def KMPSearch(txt, pat):
    lps = computeLPS(pat)
    result = []
    i = 0  
    j = 0  

    while i < len(txt):
        if txt[i] == pat[j]:
            i += 1
            j += 1

        if j == len(pat):
            result.append(i - j)
            j = lps[j - 1]  
        elif i < len(txt) and txt[i] != pat[j]:
            if j != 0:
                j = lps[j - 1]
            else:
                i += 1  
    return result


if __name__ == "__main__":
    txt = "aabaacaadaabaaba"
    pat = "aaba"
    print("Match indices:", KMPSearch(txt, pat))  
