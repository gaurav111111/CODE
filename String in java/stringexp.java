package learn;

public class stringexp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
String name ="Gaurav";
String name1 ="Gaurav";
String cast = new String("Gaurav");
if (name==name1)
	System.out.println(true);
else
	System.out.println(false);
if (name==cast.intern())
	System.out.println("same");
else
	System.out.println(false);
if(name.equals(cast))
	System.out.println("equals");
	}
}
