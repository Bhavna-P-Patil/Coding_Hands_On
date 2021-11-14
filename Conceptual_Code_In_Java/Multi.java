class Multi
{
	public static void main(String arg[])
	{
		int arr[][] = new int [3][2];
		/* arr is 2  dimensional array 
		 which contains 3 dimensional array
		 each 1 dimensional array contains 2
	   elements and each element is of type interger*/
	   
	   arr[0][0] = 10;
	   arr[0][1] = 20;
	   arr[1][0] = 30;
	   arr[1][1] = 40;
	   arr[2][0] = 50;
	   arr[2][1] = 60;
	   
	   System.out.println(arr[0][0]);       //10
	   System.out.println(arr[2][1]);       //60
	   System.out.println(arr.length);      //3
	   System.out.println(arr[0].length);   //2
	   
	   for(int i = 0; i<arr.length; i++)     //3
	   {
		   for(int j =0; j < arr[i].length; j++)
		   {
			   System.out.println(arr[i][j]);
		   }
	   }
	   //0(M*N)
	   //M is number of rows      3
	   // N is number of coloumns  2
	}
}














































































































