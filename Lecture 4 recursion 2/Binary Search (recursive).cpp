// input - input array
// size - length of input array
// element - value to be searched

int binary(int input[], int low, int high, int ele)
{
    if(low<=high)
    {
        int mid = low+(high-low)/2;
        
        if(input[mid]==ele)
            return mid;
        else if(input[mid]>ele)
           binary(input, low, mid-1,ele);
        else if(input[mid]<ele)
            binary(input, mid+1,high,ele);
    }
    else
    return -1;
}

int binarySearch(int input[], int size, int element) {
    
 return binary(input,0,size-1,element);
}
