int val(char c)
{
    switch (c)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    int i=0;
    long long A=0;
    while(s[i]!='\0')
    {
        if(val(s[i])<val(s[i+1]))
        {
            A=A+(val(s[i+1])-val(s[i]));
            i++;
        }
        else
        {
            A=A+val(s[i]);
        }
        i++;
    }
    return A;
}
