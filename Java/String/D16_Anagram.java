package String;

public class D16_Anagram {
      public static void main(String[] args) {
            String s1 = "geeks", s2 = "kseeg";
            String s3 = "allergy", s4 = "allergic";
            String s5 = "g", s6 = "g";

            System.out.println(areAnagrams(s1, s2));
            System.out.println(areAnagrams(s3, s4));
            System.out.println(areAnagrams(s5, s6));
      }

      public static boolean areAnagrams(String s1, String s2) {
            if (s1.length() != s2.length()) {
                  return false;
            }
            int[] charFrequency = new int[26];

            for (int i = 0; i < s1.length(); i++) {
                  charFrequency[s1.charAt(i) - 'a']++;
                  charFrequency[s2.charAt(i) - 'a']--;
            }

            for (int i = 0; i < 26; i++) {
                  if (charFrequency[i] != 0) {
                        return false;
                  }
            }
            return true;
      }
}
