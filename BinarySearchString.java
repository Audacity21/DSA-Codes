public class BinarySearchString{
    public static int binarySearch(String[] arr, String str){
        int l = 0, r = arr.length-1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            int comparison = str.compareTo(arr[mid]);//storing result in a variable to avoid comparing again and again
          
            if(comparison<0){//str is lexicographically smaller than arr[mid]
                //therefore must lie in the left subarray
                r = mid-1;
            }else if(comparison>0){
                l = mid+1;
            }else{
                return mid;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        //sorted array of strings 
        String arr[] = {"bad", "blog", "coder", "coding", "includehelp", "india"};
        // Given string to be searched in array
        // String str = "dog"; 
        String str = "coding";
      
        int idx = binarySearch(arr, str);

        if(idx!=-1){
            System.out.println("String "+str+" found at index "+idx);
        }else{
            System.out.println("String "+str+" is not present in the given array of strings");
        }

        //OUTPUT:
        //String coding found at index 3
        //String dog is not present in the given array of strings
    }
}
