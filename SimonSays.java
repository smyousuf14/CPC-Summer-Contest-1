import java.util.Scanner;

public class Main
{
	public static void main(String[] args) 
	{
		// Local Variables
		int commandNumbers;
		String[] commands;
		int indexNumber;
		
		// Scanner 
	    Scanner scanInt = new Scanner(System.in);
	    Scanner scanString = new Scanner(System.in);
	    
	    commandNumbers = scanInt.nextInt();
	    
	    // Set value to the commands
	    commands = new String[commandNumbers];
	    for(indexNumber = 0; indexNumber < commandNumbers; indexNumber++)
	    {
	        commands[indexNumber] = scanString.nextLine();
	    }
	    
	    // Check if the first two words is Simon says
	    for(indexNumber = 0; indexNumber < commandNumbers; indexNumber++)
	    {
	        if(commands[indexNumber].subString(0, 10)).equals("Simon says")
	        {
	            
	        }
	    }
	    
	}
}
