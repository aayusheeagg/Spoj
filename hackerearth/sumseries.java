import java.util.*;
import java.math.*;

class sumseries {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int test=in.nextInt();
        for(int i=0;i<test;i++)
        {
            BigInteger num = new BigInteger(in.next());            
            BigInteger sum=num;
            BigInteger j=BigInteger.ONE;
            while(j.compareTo(num)==-1)
            {
            	sum=sum.add(j);
            	j=j.add(BigInteger.ONE);
            }
            System.out.println(sum);
        }
    }
}
