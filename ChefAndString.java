import java.util.*;


public static void main(String[] args)throws java.lang.Exception{
        try{
        //Scanner sc = new Scanner(System.in);
        Scanner sc1 = new Scanner(System.in);
        int t = sc1.nextInt();
        sc1.nextLine();
        for(int i=1;i<=t;i++){
           
            String str = sc1.nextLine();
            int pair=0;
           
           
                for(int j=0;j<str.length()-1;j++){
                    char c = str.charAt(j);
                    if(c!=str.charAt(j+1)){
                        pair++;
                        j++;
                    }
                }
           
            System.out.println(pair);
        }
        }
       catch(Exception e){
           
       }
       
       
    } 
