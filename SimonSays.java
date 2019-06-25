import java.util.Scanner;

public class Main
{
	public static void main(String[] args) 
	{
		// Local Variables
		int commandNumbers;
		String[] commands;
		int indexNumber;
		
	    Scanner scan = new Scanner(System.in);
	    
	    commandNumbers = scan.nextInt();
	    
	    // Set value to the commands
	    commands = new String[commandNumbers];
	    for(indexNumber = 0; indexNumber < commandNumbers; indexNumber++)
	    {
	        commands[indexNumber] = scan.nextLine();
	    }
	    
	    for(indexNumber = 0; indexNumber < commandNumbers; indexNumber++)
	    {
	        System.out.println(commands[indexNumber]);
	    }
	    
	    
	}
}
