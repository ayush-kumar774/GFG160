package String;

public class D14_ImplementAtoi {
    public static void main(String[] args) {
        System.out.println(myAtoi("   -42"));
        System.out.println(myAtoi("4193 with words"));
        System.out.println(myAtoi("words and 987"));
        System.out.println(myAtoi("-91283472332"));
        System.out.println(myAtoi(" 1231231231311133"));
        System.out.println(myAtoi("  -0012gfg4"));
        System.out.println(myAtoi("  -"));
    }

    public static int myAtoi(String s) {
        int i = 0, n = s.length(), sign = 1, ans = 0;

        // 1. Skip whitespaces
        while (i < n && s.charAt(i) == ' ') i++;

        // 2. Handle optional '+' or '-'
        if (i < n && (s.charAt(i) == '+' || s.charAt(i) == '-')) {
            sign = (s.charAt(i) == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits to number
        while (i < n && Character.isDigit(s.charAt(i))) {
            int digit = s.charAt(i) - '0';

            // 4. Check for overflow/underflow
            if (ans > (Integer.MAX_VALUE - digit) / 10) {
                return (sign == 1) ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return ans * sign;
    }
}