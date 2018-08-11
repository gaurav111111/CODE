package learn;

public class byteintostring {
	public static void main(String []arg)
	{
		String value="this is the value ";
		System.out.println("string value "+value);
		System.out.println("string value address "+Integer.toHexString(value.hashCode()));
		
		byte []bytes =value.getBytes();
	
		System.out.println("converted byte value address from string"+"  "+bytes);
		
		System.out.println("bytes into string  "+bytes.toString());
		
		
	}

}
