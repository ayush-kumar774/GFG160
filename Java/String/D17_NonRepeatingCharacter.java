package String;

public class D17_NonRepeatingCharacter {
    public static void main(String[] args) {
        String s1 = "geeksforgeeks", s2 = "racecar", s3 = "aabbccc";
        System.out.println(nonRepeatingCharacter(s1));
        System.out.println(nonRepeatingCharacter(s2));
        System.out.println(nonRepeatingCharacter(s3));
    }
    public static char nonRepeatingCharacter(String s) {
        int[] frequency = new int[26];


        for (int i = 0 ; i < s.length(); i++) {
            frequency[s.charAt(i) - 'a']++;
        }

        for (int i = 0 ; i < s.length(); i++) {
            if (frequency[s.charAt(i) - 'a'] == 1) {
                return s.charAt(i);
            }
        }

        return '$';
    }
}
