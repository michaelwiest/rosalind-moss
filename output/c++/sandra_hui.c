import java.util.*;
public class PatternCount {
  /**
   * Count the number of times pattern appears in text.
   * @param text string to search in
   * @param pattern string to search for
   * @return number of times pattern appears in text
   */
  public static int PatternCount(String text, String pattern) {
    int count = 0;
    for(int i = 0; i <= text.length() - pattern.length(); i++) {
      if(text.substring(i, i + pattern.length()).equals(pattern)) {
        count++;
      }
    }
    return count;
  }
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    // Text is line 1 and Pattern is line 2
    String text = scan.nextLine();
    String pattern = scan.nextLine();
    scan.close();
    System.out.println(PatternCount(text, pattern));
  }
}