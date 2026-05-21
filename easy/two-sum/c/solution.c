int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i=0;
    int j=0;
    int* answer;
    answer=malloc(2*sizeof(int));
    while(numsSize>i)
    {
        j=i+1;
        while(numsSize>j)
        {
            if(nums[i]+nums[j]==target)
            {
                answer[0]=i;
                answer[1]=j;
                *returnSize=2;
                return(answer);
                break;
            }
            j++;
        }
        i++;
    }
    *returnSize=0;
    return NULL;
}
