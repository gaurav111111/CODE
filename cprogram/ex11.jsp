
<head>
</head>
<body>
<%@ page import="java.sql.*"%>
<%

String uname="root";
		String password="05021996";
		String url="jdbc:mysql://127.0.0.1/student";
		try{
			Class.forName("com.mysql.jdbc.Driver");
			Connection con=DriverManager.getConnection(url,uname,password);
			Statement st=con.createStatement();
			ResultSet rs=st.executeQuery("select * from login");
			out.println("USERNAME"+"PASSWORD");
			while(rs.next())
			{
				out.println(rs.getString(1)+" "+rs.getString(2));
			}
			rs.close();
			st.close();
			con.close();
		}
		catch(SQLException e)
		{
			out.println(" connection error");
		}
		catch(ClassNotFoundException e)
		{
			out.println(" driver error");
		}
		%>
  </body>
  </html>