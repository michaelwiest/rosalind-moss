import java.util.*;
import java.lang.*;
import java.io.*;


public class Problem1{


	public static int PatternCount(String Text, String Pattern){

		int sizetext = Text.length();
		int sizepattern = Pattern.length();
		int counter = 0;			//initialize the number of times pattern appears
	
		for(int i = 0 ; i <= sizetext-sizepattern ; i++){
			String thisstring = Text.substring(i, i+sizepattern);
			if(thisstring.equals(Pattern))
				counter++;	
		}
		System.out.println("The pattern appears " + counter + " times" ); 
		return counter;


	}


	public static void main(String args[]){

		//if(args.length == 0)
		//	System.exit(0);


		File file = new File(args[0]);

		try{
			Scanner scanner = new Scanner(file);

			while(scanner.hasNextLine()){
				String Text = scanner.nextLine();
				String Pattern = scanner.nextLine();
				System.out.println(PatternCount(Text, Pattern));
			}
		}
		
		catch(IOException error){
			System.exit(0);
		}

	}


}