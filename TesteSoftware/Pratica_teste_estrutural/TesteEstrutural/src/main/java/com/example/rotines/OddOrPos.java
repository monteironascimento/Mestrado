package com.example.rotines;

public class OddOrPos {
  /**
   * Count odd or positive elements in an array
   *
   * @param x array to search
   * @return count of odd or positive elements in x
   * @throws NullPointerException if x is null
   */
   public static int oddOrPos (int[] x)
   {  // Effects:  if x is null throw NullPointerException
      // else return the number of elements in x that
      //      are either odd or positive (or both)
      int count = 0;
   
      for (int i = 0; i < x.length; i++)
      {
         if (x[i]%2 == 1 || x[i] > 0)
         {
            count++;
         }
      }
      return count;
   }

}

