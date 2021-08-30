
//package competative_programming;

//import java.io.FileWriter;
//import java.io.IOException;
//import java.io.PrintWriter;
import java.util.*;
import java.math.*; 

//public class Competative_programming{

   public class Main{

    public static void main(String[] args) {
          
  Scanner scan = new Scanner(System.in);
                
  while (scan.hasNext()) {
   
	BigInteger b = scan.nextBigInteger();
        BigInteger p = scan.nextBigInteger();
        BigInteger m = scan.nextBigInteger();
		
                        
	b = b.modPow(p,m);
			
         System.out.println(b);
	}
}
       
}
