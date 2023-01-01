long long maxArea(long long A[], int len)
{
    long long ans =0,temp=0,i=0,j=len-1;
    while(i<j){
            int height=min(A[i],A[j]);
            int breath=j-i;
            temp=height*breath;
            ans=max(ans,temp);
    if(A[i]>A[j]){
        --j;}
    else {
        ++i;
        }
    }
    return ans;
}