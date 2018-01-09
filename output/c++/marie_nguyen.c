import java.lang.String; 
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Problem1 {
	public static int PatternCount(String Text, String Pattern ){
		int patternLength = Pattern.length();
		int textLength = Text.length();
		System.out.println(patternLength);
		System.out.println(textLength);
		int i = 0;
		int count = 0;
		while( (patternLength + i) != textLength+1 ){

			if(Text.substring(i, patternLength + i).equals(Pattern)){
				count++;
			}
			i++;
		}
		return count; 
	}
	
	public static String[] readFile(String fileName) throws IOException {
	    BufferedReader br = new BufferedReader(new FileReader(fileName));
	    String stringArray [] = new String [2];
	    try {
	        StringBuilder sb = new StringBuilder();
	        String line = br.readLine();
	        int i = 0;
	        while (line != null) {
	            //sb.append(line);
	           // sb.append("\n");
	            stringArray[i] = line;
	            i++;
	            line = br.readLine();
	        }
	        return stringArray;
	    } finally {
	        br.close();
	    }
	}
	
	public static void main(String[] args) throws IOException {
		String stringArray [];
		stringArray = readFile(args [0]); 
		int answer = PatternCount(stringArray[0], stringArray[1]);
		System.out.println(answer);
	}
}