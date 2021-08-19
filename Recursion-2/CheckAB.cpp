bool checkAB(char input[], int start){
    
    if(input[start] == '\0' || input[start] == 'a' && input[start + 1] == '\0')
        return true;
    
    if(input[start] != 'a')
        return false;
    
    if(input[start] == 'a'){
        if(input[start + 1] == 'b' && input[start + 2] == 'b')
            return checkAB(input, start + 3);
        else
            return checkAB(input, start + 1);
    }
    return false;
}




bool checkAB(char input[]) {
	// Write your code here
    return checkAB(input, 0);
}
