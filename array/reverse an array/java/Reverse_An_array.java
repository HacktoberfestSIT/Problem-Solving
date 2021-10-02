
class Reverse_An_array{
    public static void main( String[] args)
    {
        int[] A = new int[]{1,2,3,4,5};
        int i=0;
        int j= A.length-1;
        int temp;
        while ( i<j)
        {
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
            i++;
            j--;
        }

        for(int x=0 ; x<A.length;x++)
        {
            System.out.print(A[x]+" ");
        }
    }
}