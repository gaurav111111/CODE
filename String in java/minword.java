package learn;

public class minword {

	public static void main(String[] args) {
		String str = "this is the code of string handling";
		String[] words = str.split(" ");
		int max=0,flag=-1,flag1=-1,min=0;
		
		for (int i=0;i<words.length;i++)
		{
			if(words[i].length()>max)
			{
				max=words[i].length();
			flag=i;
			}
		}
		if(flag!=-1)
			System.out.println("maximum word "+words[flag]+"in a string & the length is "+max+" ");
		
		for (int i=0;i<words.length;i++)
		{
			if(words[i].length()<min)
			{
				min=words[i].length();
			flag1=i;
			}
		}
		if(flag!=-1)
			System.out.println("minimum word "+words[flag]+"in a string & the length is "+(min+1)+" ");
	}

}
