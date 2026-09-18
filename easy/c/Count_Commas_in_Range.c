int countCommas(int n) {
    int i=0;
    int j=0;
    int c=0;
    int c1=0;
    while(i<=n)
    {
        c1=0;
        j=i;
        while(j>0)
        {
            j=j/10;
            c1++;
        }
        if(c1>=4)
        {
            c++;
        }
        i++;
    }
    return(c);
}
