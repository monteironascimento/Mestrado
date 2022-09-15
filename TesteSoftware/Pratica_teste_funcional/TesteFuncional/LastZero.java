public class LastZero {
  /**
   * Find LAST index of zero
   *
   * @param x array to search
   * @return index of last 0 in x; -1 if absent
   * @throws NullPointerException if x is null
   */
   public static int lastZero (int[] x){

      for (int i = 0; i < x.length; i++){
         if (x[i] == 0){
            return i;
         }
      }
      return -1;
   }

// test:  x=[0, 1, 0]
//        Expected = 2

   public static void main(String[] args) {
      System.out.println("Teste do LastZero \n\n");
      int[] x = {0, 1, 0};

      try {
         if(LastZero.lastZero(x) == 2){
            System.out.println("Sucesso");
         }else{
            System.out.println("Falha");
         }
      } catch (Exception e) {
         System.out.println("Erro");
      }
   }

}