function computeLPS(pat) {
      const lps = new Array(pat.length).fill(0);
      let len = 0, i = 1;

      while (i < pat.length) {
            if (pat[i] === pat[len]) {
                  lps[i++] = ++len;
            } else {
                  if (len !== 0) len = lps[len - 1];
                  else lps[i++] = 0;
            }
      }
      return lps;
}

function KMPSearch(txt, pat) {
      const lps = computeLPS(pat);
      const result = [];
      let i = 0, j = 0;

      while (i < txt.length) {
            if (txt[i] === pat[j]) {
                  i++; j++;
            }

            if (j === pat.length) {
                  result.push(i - j);
                  j = lps[j - 1]; 
            } else if (i < txt.length && txt[i] !== pat[j]) {
                  if (j !== 0) {
                        j = lps[j - 1];
                  } else {
                        i++;
                  }
            }
      }

      return result;
}


const txt = "aabaacaadaabaaba";
const pat = "aaba";
console.log("KMP Match Indices:", KMPSearch(txt, pat));
