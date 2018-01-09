import java.io.FileNotFoundException;
import java.io.File;
import java.util.Scanner;

/**
 * Created by Andrew on 1/6/2016.
 */
public class PatternFrequency {

    public static void main(String[] args){
        String filename = args[0];
        try{
            Scanner s = new Scanner(new File(filename));
            String text = s.next();
            String pattern = s.next();
            System.out.println("" + patternCount(text, pattern));
            s.close();
        }
        catch(FileNotFoundException e){
            System.err.print("File not found.");
        }
    }

    public static int patternCount(String text, String pattern) {
        int frq = 0;
        for(int i = 0; i < text.length() - pattern.length(); i++)
            if (text.substring(i, i + pattern.length()).equals(pattern))
                frq++;
        return frq;
    }
}