class Jagge
{
	public static void main(String arg[])
	{
		int arr[][] = new int [3][];
		arr[0] = new int[3];
		arr[1] = new int[2];
		arr[2] = new int [4];
	   
	   arr[0][0] = 10;
	   arr[0][1] = 20;
	   arr[0][2] = 30;
	   arr[1][0] = 40;
	   arr[1][1] = 50;
	   arr[2][0] = 60;
	   arr[2][1] = 70;
	   arr[2][2] = 80;
	   arr[2][3] = 90;
	   
	   System.out.println(arr.length);       //3
	   System.out.println(arr[0].length);       //3
	   System.out.println(arr[1].length);      //3
	   System.out.println(arr[2].length);   //2
	   
	   for(int i = 0; i<arr.length; i++)     //4
	   {
		   for(int j =0; j < arr[i].length; j++)
		   {
			   System.out.println(arr[i][j]);
		   }
	   }
	   
	}
}














































































































