bool isValid(char* s) {
    int i=0;
    int j=0;
    char str[10001];
    int c=0;
    while(s[i]!='\0')
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            str[j]=s[i];
            j++;
        }
        else if(s[i]==')' || s[i]==']' || s[i]=='}')
        {
            if(j==0)
            {
                return false;
            }
            j--;
            if((s[i]==')' && str[j]!='(') || (s[i]==']' && str[j]!='[')  || (s[i]=='}' && str[j]!='{'))
            {
                return false;
            }
        }
        i++;
    }
    if(j!=0)
    {
        return false;
    }
    return true;
}
