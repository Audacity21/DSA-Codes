package com.naresh;

import java.util.Arrays;

public class bubble {
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5};
        bubble(arr);
        System.out.println(Arrays.toString(arr));

    }
   static void bubble(int [] arr){
        boolean swapped;
  // run the steps n-1 times
     for(int i=0;i< arr.length;i++){
           swapped =false;
         //for each step, max item will come at the last respective index
         for(int j=1;j<arr.length-i;j++){
             //swap if the ite  is smaller than th e previous item
             if(arr[j]<arr[j-1]){
                 int temp=arr[j];
                 arr[j]=arr[j-1];
                 arr[j-1]=arr[j];
                 swapped=true;
             }
         }
         //If you did not swap for a particular  value of i ,it means Array is sorted hence steop the program
        if(!swapped) { //true
            break;
        }
     }
   }
}
