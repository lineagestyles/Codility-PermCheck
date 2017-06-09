int solution(int A[], int N) {
   int i,check=0;
   if(N==0 || (A[0]!=1 && N==1)){return 0;}
    for (i=0;i<N;i++)
        {
        if(A[i]>N) return 0;
        check=check^(i+1)^A[i];
        }
    if(check==0)
        return 1;
    else
        return 0;
}