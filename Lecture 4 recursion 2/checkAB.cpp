int len(char input[])
{
	int i;
    for(i = 0;input[i]!='\0';i++);
    return i;
}

bool checkAB(char input[]) {
	if(len(input)==0)
        return true;
    
    if(input[0] == 'a')
    {
        if(len(input+1)>1 && (input[1] == 'b' && input[2] == 'b'))
            return checkAB(input+3);
        else
            return checkAB(input+1);
    }
    return false;

}



