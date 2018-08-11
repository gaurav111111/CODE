package learn;

public class reversewordbyword {

	public static void main(String[] args) {
		String str = "this is the code of string handling ";
		String[] words = str.split(" ");
		String reverseString = "";
		for (int i=0;i<words.length;i++)
		{
			String word =words[i];
			String reverseword ="";
			for (int j=word.length()-1;j>=0;j--)
			{
				reverseword =reverseword + word.charAt(j);
			}
			reverseString =reverseString + reverseword + " ";
			
			
		}
		System.out.println(reverseString);
	}

}
