


class main
{
void foo()
{
System.out.println(this);
}
public static void main(String a[])
{
main c=new main();
main b=c;
c.foo();
System.out.println(c);
System.out.println(b);
}
}