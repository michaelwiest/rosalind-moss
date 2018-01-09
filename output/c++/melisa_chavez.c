import java.util.*;
import java.lang.*;
import java.io.*;

public class hw1p1{
  //method to count the appearances of a pattern in a text
  public static int patternCount(String text, String pattern){

    int count = 0; //counter for number of appearances
    int tSize = text.length(); //holder var for the size of the text input
    int pSize = pattern.length(); //holder variable for size of pattern
    
    //System.out.println("pSize is "+pSize+" and tSize is "+tSize);
    //loop through the dataset(text) to find the pattern
    for (int i = 0; i<(tSize-pSize+1); i++){
	    String substr = text.substring(i);
      String sub = substr.substring(0,pSize);
      //System.out.println(sub);
      //System.out.println("i is "+i);
	    if (sub.equals(pattern))
	       	count++;
	    else
	      	continue;   
    }
    return count;
  }
  
  /////////////////main//////////////////
  public static void main (String[] args){
    //arguments will be file and then pattern
    int counter = 0;  //holder var to parse arguments
    
    if (args.length == 0){
      //System.out.println("text is bad");
      System.exit(0);
    }
    
    File text = new File(args[0]);
    String pattern = args[1];
    
    try{
      Scanner scan = new Scanner(text);
      //System.out.println(scan.nextLine());
      String line = "";
      while(scan.hasNextLine()){
        line = scan.nextLine();
        counter = counter + patternCount(line, pattern);
        //System.out.println(line);
        //System.out.println(counter-1);
      }
      System.out.println(counter-1);
    }
    catch(IOException error){
      //System.out.println("Sorry bud");
      System.exit(0);
    }
    //System.out.println("Printing done");
    
  }
}