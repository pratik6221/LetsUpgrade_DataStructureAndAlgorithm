//Algorithm

/*
1. Compare key with the elements at the m1 index and m2 index. 
If the key gets matched with the element at m1 index then return m1 and if it gets matched with the element at m2 index
then return m2.

2. Check If the key is less than the element at the m1 index. If yes, then recursively call the function to check if the key
is present in between l and m1-1 index.

3. If the key is greater than the element at the m2 index then recursively call the function to check if the key is present
in between m2+1 and r index.

4. Otherwise recursively call the function to check if the key is present in between m1+1 and m2-1 index.

5.Return -1 if the element is not present in the array.
*/


//function for Ternary Search.
int ternary_search(int arr[], int l, int r, int key) 
{ 
    if (l<=r) 
    { 
        int m1 = l + (r - l) / 3; 
        int m2 = r - (r - l) / 3; 
  
  
        if (arr[m1]==key)  
        { 
            return m1; 
        }
     
        if (arr[m2]==key) 
        { 
            return m2; 
        } 
  
        if (key < arr[m1])  
        { 
            return ternary_search(arr, l, m1 - 1, key); 
        } 
        else if (key > arr[m2])  
        { 
        
            return ternary_search(arr, m2 + 1, r, key); 
        } 
        else
        { 
  
            return ternary_search(arr, m1 + 1, m2 - 1, key); 
        } 
    } 
  
    return -1; 
} 
