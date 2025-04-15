package String;

public class AddBinaryStrings {
    public static void main(String[] args) {
        String s1 = "1101", s2 = "111";
        String s3 = "00100", s4 = "010";
        System.out.println(addBinary(s1, s2));
        System.out.println(addBinary(s3, s4));
    }
    public static String addBinary(String s1, String s2) {
        int i = s1.length() - 1;
        int j = s2.length() - 1;

        int carry = 0;
        StringBuilder str = new StringBuilder();

        while (i >= 0 || j >= 0 || carry != 0) {
            int sum = carry;

            if (i >= 0) {
                sum += s1.charAt(i) - '0';
                i--;
            }

            if (j >= 0) {
                sum += s2.charAt(j) - '0';
                j--;
            }

            str.append(sum % 2);
            carry = sum / 2;
        }

        int index = 0;
        while (index < str.length() && str.charAt(index) == '0') {
            index++;
        }
        return (index == str.length()) ? "0" : str.substring(index);
    }
}
