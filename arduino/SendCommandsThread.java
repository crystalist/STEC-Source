package arduino;

import java.io.IOException;
import java.io.OutputStream;
import java.util.Scanner;

/**
 * Simple thread to turn on/off an led
 * 
 * @author dr.im
 *
 */
public class SendCommandsThread extends Thread {

	private OutputStream output;

	public SendCommandsThread(OutputStream ostream) {
		output = ostream;
	}

	@Override
	public void run() {
		Scanner keyboard = new Scanner(System.in);
		
		while(true)
		{
			System.out.println("Please type 1 on turn-on the lights 0 to turn-off");
			int command = keyboard.nextInt();
			try {
				output.write(command);
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}
}
