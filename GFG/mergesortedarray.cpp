int getgap(int g)
{
    if (g <= 1)
    {
        return 0;
    }
    return (g / 2) + (g % 2);
}
void merge(int arr1[], int arr2[], int n, int m)
{
    // code here
    int i, j;
    int gap = n + m;

    for (gap = getgap(gap); gap > 0; gap = getgap(gap))
    {
        for (i = 0; i + gap < n; i++)
        {
            if (arr1[i] > arr1[i + gap])
            {
                swap(arr1[i], arr1[i + gap]);
            }
        }
        for (j = n < gap ? gap - n : 0; i++, j++; i < n && j < m)
        {
            if (arr1[i] > arr2[j])
            {
                swap(arr1[i], arr2[j]);
            }
        }
        if (j < m)
        {
            for (j = 0; j + gap < m; j++)
            {
                if (arr2[j] > arr2[j + gap])
                {
                    swap(arr2[j], arr2[j + gap]);
                }
            }
        }
    }
}