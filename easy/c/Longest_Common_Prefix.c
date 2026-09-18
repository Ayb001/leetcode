char* longestCommonPrefix(char** strs, int strsSize) {
    int j=0;
    int i=1;
    int k=0;
    char *str = malloc(201);
    while(strs[0][j]!='\0')
    {
        i=1;
        while(i<strsSize)
        {
            if(strs[0][j]!=strs[i][j])
            {
                str[k] = '\0';
                return str;
            }
            i++;
        }
        str[k]=strs[0][j];
        k++;
        j++;
    }
    str[k]='\0';
    return str;
}
