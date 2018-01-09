public class PatternCount{
  public static void main (String[] args){
    String text = args[0];
    String pattern = args[1];
   
    int count = FreqCount(text, pattern);
    System.out.println(count);
    
  }
  public static int FreqCount(String text1, String pattern1){
    int count=0;
    for( int i=0; i< text1.length() - pattern1.length()+1; i++){
      if(text1.substring(i, i+pattern1.length()).equals(pattern1) ){
          count++;
      }
    }
    return count;
  }

}