import java.util.Scanner;
public class PatternCount {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String text = scan.next();
		String pattern = scan.next();
		scan.close();
		System.out.println(pCount(text,pattern));
	}
	public static int pCount(String text, String pattern){
		int counter;
		int casecounter = 0;
		for(counter = 0; counter <= (text.length() - pattern.length()); counter++){
			if (text.substring(counter, counter+pattern.length()).equals(pattern)){
				casecounter++;
			}
		}
		return casecounter;
	}
}