/ C++ program for reversal algorithm
// of array rotation
#include
using namespace std;

/*Function to reverse arr[] from index start to end*/
void rvereseArray(int arr[], int start, int end)
{
while (start < end) { int temp = arr[start]; arr[start] = arr[end]; arr[end] = temp; start++;
end--;
}
} /* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n)
{
    if (d == 0) return;
       rvereseArray(arr, 0, d - 1);
       rvereseArray(arr, d, n - 1);
       rvereseArray(arr, 0, n - 1); } // Function to print an array
       void printArray(int arr[], int size)
       {
           for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
       } /* Driver program to test above functions */
       int main()
       {
           int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
           int n = sizeof(arr) / sizeof(arr[0]);
           int d = 2; // in case the rotating factor is // greater than array length
           d = d % n; // Function calling
           leftRotate(arr, d, n);
           printArray(arr, n);
           return 0;
        }
        [tabby title="C"] // C/C++ program for reversal algorithm of array rotation #include

/*Utility function to print an array */
void printArray(int arr[], int size);

/* Utility function to reverse arr[] from start to end */
void rvereseArray(int arr[], int start, int end);

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n)
{

if (d == 0)
return;
rvereseArray(arr, 0, d – 1);
rvereseArray(arr, d, n – 1);
rvereseArray(arr, 0, n – 1);
}

/*UTILITY FUNCTIONS*/
/* function to print an array */
void printArray(int arr[], int size)
{
int i;
for (i = 0; i < size; i++) printf("%d ", arr[i]); } /*Function to reverse arr[] from index start to end*/
void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp; start++;
             end--;
        }
} /* Driver program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // in case the rotating factor is
    // greater than array length
    d = d % n;
    leftRotate(arr, d, n);
    printArray(arr, n);
    return 0;
}
[tabby title="Java"] // Java program for reversal algorithm of array rotation
 import java.io.*;
 class LeftRotate { /* Function to left rotate arr[] of size n by d */
     static void leftRotate(int arr[], int d)
      {
          if (d == 0) return;
          int n = arr.length;
          revereseArray(arr, 0, d - 1);
          revereseArray(arr, d, n - 1);
          rvereseArray(arr, 0, n - 1);
      } /*Function to reverse arr[] from index start to end*/
      static void rvereseArray(int arr[], int start, int end)
      {
          int temp;
          while (start < end)
            {
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
      } /*UTILITY FUNCTIONS*/ /* function to print an array */
      static void printArray(int arr[])
      {
          for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
          } /* Driver program to test above functions */
          public static void main(String[] args)
          {
              int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
              int n = arr.length;
              int d = 2; // in case the rotating factor is // greater than array length
              d = d % n;
              leftRotate(arr, d); // Rotate array by d
              printArray(arr);
          }
      } /*This code is contributed by Devesh Agrawal*/
      [tabby title="Python"]
      # Python program for reversal algorithm of array rotation # Function to reverse arr[] from index start to end def rverseArray(arr, start, end): while (start < end): temp = arr[start] arr[start] = arr[end] arr[end] = temp start += 1 end = end-1 # Function to left rotate arr[] of size n by d def leftRotate(arr, d): if d == 0: return n = len(arr) rverseArray(arr, 0, d-1) rverseArray(arr, d, n-1) rverseArray(arr, 0, n-1) # Function to print an array def printArray(arr): for i in range(0, len(arr)): print arr[i], # Driver function to test above functions arr = [1, 2, 3, 4, 5, 6, 7] n = len(arr) d = 2 # in case the rotating factor is # greater than array length d = d % n leftRotate(arr, d) # Rotate array by 2 printArray(arr) # This code is contributed by Devesh Agrawal [tabby title="C#"] // C# program for reversal algorithm // of array rotation using System; class GFG { /* Function to left rotate arr[] of size n by d */ static void leftRotate(int[] arr, int d) { if (d == 0) return; int n = arr.Length; rvereseArray(arr, 0, d - 1); rvereseArray(arr, d, n - 1); rvereseArray(arr, 0, n - 1); } /* Function to reverse arr[] from index start to end*/ static void rvereseArray(int[] arr, int start, int end) { int temp; while (start < end) { temp = arr[start]; arr[start] = arr[end]; arr[end] = temp; start++; end--; } } /*UTILITY FUNCTIONS*/ /* function to print an array */ static void printArray(int[] arr) { for (int i = 0; i < arr.Length; i++) Console.Write(arr[i] + " "); } // Driver code public static void Main() { int[] arr = { 1, 2, 3, 4, 5, 6, 7 }; int n = arr.Length; int d = 2; // in case the rotating factor is // greater than array length d = d % n; leftRotate(arr, 2); // Rotate array by 2 printArray(arr); } } // This code is contributed by Sam007 [tabby title="PHP"]
