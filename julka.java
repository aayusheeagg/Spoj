import java.util.*;
import java.math.*;
class julka
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        for(int i=0;i<10;i++)
        {
            BigInteger Apples = new BigInteger(in.next());
            BigInteger more = new BigInteger(in.next());
            BigInteger Klaudia = (Apples.add(more)).divide(new BigInteger("2"));
            BigInteger Natalia = Apples.subtract(Klaudia);
            System.out.println(Klaudia.toString());
            System.out.println(Natalia.toString());
        }
    }
}
