class Test30
{
    public static void main(String arg[])
    {
        StringBuffer firstWord = new StringBuffer("Hello World");
        System.out.println(firstWord);
        firstWord.delete(1, 3);
        System.out.println(firstWord);
        firstWord.deleteCharAt(0);
        System.out.println(firstWord);
    }
}