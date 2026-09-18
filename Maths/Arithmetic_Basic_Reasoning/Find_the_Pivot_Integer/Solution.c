int pivotInteger(int n) {
    int i=1;
    int s=0;
    int ts=0;
    s=0;
    while(i<=n)
    {
        ts=ts+i;
        i++;
    }
    i=1;
    while(i<=n)
    {
        s=s+i;
        if(s==ts)
        {
            return i;
        }
        ts=ts-i;
        i++;
    }
    return -1;
}
