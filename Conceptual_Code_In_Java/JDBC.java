import java.sql.*;

public class JDBC
{
	public static void main(String arg[])
	{
		try
		{
			Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA26","root","root");
			Statement stmt = conn.createStatement();
			ResultSet rs = stmt.executeQuery("SELECT * from Student");
			
			while(rs.next())
			{
				System.out.println("RID" + rs.getInt("RID"));
				System.out.println("Age" + rs.getInt("Age"));
				System.out.println("Name" + rs.getString("name"));
				System.out.println("City" + rs.getString("City"));
			}
		}
		catch (Exception e)
		{
			e.printStackTrace();
		}
		finally
		{
			rs.close();
			stmt.close();
			conn.close();
		}
	}
}
