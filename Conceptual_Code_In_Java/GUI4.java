import java.awt.*;

class MarvellousWindow extends Frame
{
	Button b1;
	
	
	public MarvellousWindow(String str, int x, int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		
		b1 = new Button("Submit");
		b1.setBounds(50,50,100,50);
		
		add(b1);
		setLayout(null);
		setVisible(true);
		
	}
}
class GUI4
{
	public static void main(String arg[])
	{
		MarvellousWindow mobj1 = new MarvellousWindow("First",500,500);
	}
}