
bool canType(string s1, string s2) {
    // Write your code here
   int i=0,j=0;
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else if(i>0 && s1[i-1]==s2[j]){
            j++;
        }
        else {
            return false;
        }
    }
    while(j<s2.size()){
        if(s1[i-1]!=s2[j]){
            return false;
        }
        j++;
    }
    return i<s1.size() ? false:true;
}
