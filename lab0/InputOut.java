// ==========================================================================
// $Id: InputOut.java,v 1.1 2016/09/09 21:39:07 jlang Exp $
// CSI2372 Java code for laboratory 0
// ==========================================================================
// (C)opyright:
//
//   Jochen Lang
//   EECS, University of Ottawa
//   800 King Edward Ave.
//   Ottawa, On., K1N 6N5
//   Canada. 
//   http://www.eecs.uottawa.ca
// 
// Creator: jlang (Jochen Lang)
// Email:   jlang@eecs.uottawa.ca
// ==========================================================================
// $Log: InputOut.java,v $
// Revision 1.1  2016/09/09 21:39:07  jlang
// Created new intro lab 0
//
//
// ==========================================================================
import java.util.Scanner;


public class InputOut 
{

  /**
   * Input routine which reads an int
   */
  public static int readInt() 
    throws java.io.IOException
  {
    System.out.println( "Please enter an integer:" );
    Scanner conIn = new Scanner (System.in) ;
    while (conIn.hasNext()) {
      if (conIn.hasNextInt()) {
        return conIn.nextInt();
      }
    } 
    return 0;
  }

  /**
   * Input routine which reads a string
   */
  public static String readString() 
    throws java.io.IOException
  {
    System.out.println( "Please enter a string:" );
    Scanner conIn = new Scanner (System.in) ;
    if (conIn.hasNext()) {
      return conIn.next();
    } 
    return new String();
  }
  
  
  /**
   * Routine which prints an integer.
   */
  public static void show( int iVal ) 
  {
    System.out.println( "Printing the integer to the console: " );
    System.out.println( iVal );
    return;
  }
	
  /**
   * Routine which prints a string.
   */
  public static void show( String sVal ) 
  {
    System.out.println( "Printing the string to the console: " );
    System.out.println( sVal );
    return;
  }
	
	
  
  public static void main(String args[])
    throws java.io.IOException 
  {
    // could use java.io.Console instead 
    int iVal = readInt();
    show(iVal);
    String sVal = readString(); 
    show(sVal);
    return;
  }
}
