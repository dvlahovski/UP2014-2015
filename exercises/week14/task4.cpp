//non-recursive solution

bool isFirstHalfGreater(int a[], int n)
{
    for (int i=0; i<= n-1; i++)
    {
        for (int j=n; j<= 2*n-1; j++)
        {
            if (a[i] <= a[j]) return false;
        }
    }
    return true;
}

//recursive solution

bool isFirstHalfGreaterR(int a[], int n)
{
    return helper(a, n, 0, n);
}

/*a helper function, the first two parameters of which are the array and the number n,
the second two are iterators with the same function as i and j in the non-recursive solution*/
bool helper(int a[], int n, int i, int j)
{
    if (i==n) return true; //we've gone through the array and haven't returned false, which means that the condition is true
    else //in this case i <= n-1, with i we move through the elements of the first half
    {
        if (j==2*n)
        {
            //the i-th element of the array is greater than every element in the second half, so we call the function with i+1
            return helper(a, n, i++, n);
        }
        else //in this case n <= j <= 2*n-1
        {
            if (a[i] <= a[j]) return false;//there is an element in the first half that is less than an elem in the second half
            else
            {
                //a[i] > a[j], so we call the function with j+1(iterating through the second half of the array)
                return helper(a, n, i, j++);
            }
        }
    }

}
