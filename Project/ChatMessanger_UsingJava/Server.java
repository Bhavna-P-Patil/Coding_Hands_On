import java.io.*;
import java.net.*;
import java.awt.*;

class MarvellousWindow extends Frame
{
	Button b1;
	
	
	public MarvellousWindow(String str, int x, int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		
		b1 = new Button("Send");
		b1.setBounds(50,50,100,50);
		
		add(b1);
		setLayout(null);
		setVisible(true);
		
	}
}

class Server
{
	public static void main(String args[]) throws Exception
	{
		MarvellousWindow mobj1 = new MarvellousWindow("Server_ChatMessanger",600,600);
		/*// Create new frame
		Frame f = new Frame("Server_ChatMessanger");
		
		// Decide size of that Frame
		f.setSize(500,500);

		// Display that frame
		f.setVisible(true);
		
		Button b1;*/
		
		String str1,str2;

		System.out.println("Server is running...\n\n");

		ServerSocket ss = new ServerSocket(2101);

		Socket s = ss.accept();

		System.out.println("Connection is succesfully established...");	
		
		PrintStream ps = new PrintStream(s.getOutputStream());
		
		BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));

		BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
		
		while((str1 = br1.readLine()) != null)
		{
			System.out.println("Client Says : "+str1);
			System.out.println("Enter message for client");
			str2 = br2.readLine();
			ps.println(str2);
		}
		
		//b1 = new Button("Send");
		//b1.setBounds(50,50,100,50);
		

		ps.close();
		br1.close();
		br2.close();
	}
}