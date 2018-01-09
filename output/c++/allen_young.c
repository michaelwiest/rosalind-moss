public class Ahoy {

    /*index represents the current index you're located on the text
      nmer represents the pattern
      text represents the entire string that you are looking at */
	public String stringToCharArray(int index, String nmer, String text){
      char[] charArray = text.toCharArray();
      char[] returnArray = new char[nmer.length()];
      int a = 0;
      while(a < nmer.length()){
      	returnArray[a] = charArray[index];
      	a++;
        index++;
      }
      String returnString = String.copyValueOf(returnArray);
      return returnString;
    }
   
    /*text is the entire string that you are looking at
      pattern is the string you are seeking if it exists in text and how many*/
	public int PatternCount(String text, String pattern){
	  int count = 0;	  
	  for(int i = 0; i <= (text.length()-pattern.length()); i++){

        if(stringToCharArray(i,pattern,text).equals(pattern))
		{
		  count++;
		}
	  }
	  return count;
	}
 
    public static void main(String[] args) { 
      Ahoy chips = new Ahoy();
      String text = "CATGCATCATGCATCATGCATCATGCATAGCATGCATCCGCATGCATACTGTACCATGCATAGTTTGTCCATGCATGCATGCATGGGCGTCATGCATGCCATGCATACTAGAGGCCATGCATGCATGCATAGTGACGGGCATGCATGACTTACGCATGCATCATGCATCATGCATCATGCATGCCATGCATCCCATGCATGGCGCCCATGCATGACATGCATGGCCATGCATCGCCATGCATACATGCATCATGCATACGGAACTCACCATGCATTCATGCATACATGCATCATGCATATAACATGCATTGTCATGCATTCATGCATCCATGCATTAGACATGCATCTGTAGTCTGAACATGCATCATGCATTCCATGCATATTAATCATGCATGCATGCATCATGCATCCCATGCATTTCATGCATACATGCATCATGCATGCCCTCAGCTTATCATGCATCTCATGCATCCCATGCATACCATAGGTTACATGCATATGCATGCATTCATGCATCATGCATCATGCATTTTTCATGCATCATGCATCCATGCATCATGCATGGGCATGCATCCTCATGCATGTTGCATGCATACTGGACATGCATTCCATGCATGCATGCATCATGCATCCATGCATCCCATGCATCATGCATACATGCATCGTCTCACATGCATTCCATGCATCCATGCATTCCATGCATGCACGAGCATGCATCCATGCATCACCATGCATTAACGTCGCCATGCATCATGCATCGCAACATGCATTTGCATGCATTTTCATGCATCACATGCATGGTCATGCATCATGCATCATGCATGCATGCATCATGCATCATGCATCATGCATCGAGCATGCATGTCATGCATCATGCATCATGCATGGCATGCATTTTTTCTAATCATGCATACCTCCATGCATATGACATGCATACATGCATCATGCATGCCATGCATGCATGCATATACATGCATTCATGCATCTGTCATGCATCATGCATAATCATAGGCATGCATCTCATGCATCCGGCATGCATGGC";
      String pattern = "CATGCATCA";
      int num = chips.PatternCount(text, pattern);
      System.out.println(num);
    }
  }