package leedcode;
class setBitsTillNum {
   static public int[] countBits(int num) {
        int[] arr=new int[num+1];

        arr[0]=0;   //base
        if(num==0)
            return arr;
        arr[1]=1;  //case
        if(num==1)
            return arr;

        int h=2;

        for(int i=2;i<num+1;i++){
            arr[i]=arr[i-h]+1;
            if((i+1)/h!=1)
                h=h*2;
        }
        return arr;
    }
    public static void main(String[] args) {
        
        int[] a=countBits(5);
        for(int i=0;i<a.length;i++){
            System.out.println(a[i]);
        }
    }
}
