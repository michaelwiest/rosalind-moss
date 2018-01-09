import java.io.*;
import java.util.*;

public class problem1 {
    public static void main(String [] args) {

        String fileName = "rosalind_ba1a.txt";
        String str1 = null;
        String str2 = null;
        int count = 0;
        int index = 0;
        int max = 0;

        try {
            FileReader fileReader = new FileReader(fileName);
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            str1 = bufferedReader.readLine();
            str2 = bufferedReader.readLine();
            bufferedReader.close(); 
            //System.out.println(str1);
            //System.out.println(str2);
            max = str1.length() - str2.length();
            while(index <= max){
              if(str1.indexOf(str2) == 0){
                count++;
              }
              index++;
              str1 = str1.substring(1);
              //System.out.println(str1.length());
            }
            
            System.out.println(count);
        }
        
        catch(FileNotFoundException ex) {
            System.out.println(
                "Unable to open file '" + 
                fileName + "'");                
        }
        catch(IOException ex) {
            System.out.println(
                "Error reading file '" 
                + fileName + "'");                  

        }
    }
}