int Partition(int a[],int low,int high)
{
    int tmp = a[low];
    while(low<high)
  {
    while(a[high]>tmp && high > low )
        { high--; }
    if(high > low)
        {
         a[low] = a[high];low++;
        }
    while(a[low] < tmp && high >low )
        {low++; }
    if(high>low)
        {
        a[high] = a[low];
        high--;
        }
  }
   a[low] = tmp;
   return low;
}

void QuickSort(int s[],int low,int high)
{
  int tmp;
        if(low<high)
        {
           tmp = Partition(s,low,high);
           QuickSort(s,low,tmp-1);
           QuickSort(s,tmp+1,high);
        }
}

