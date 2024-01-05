/* https://www.geeksforgeeks.org/problems/run-length-encoding/1 */
//Solution - Run Length Encoding
string encode(string src)
{     
  //Your code here 
  string result;
  for(int i=0; i<src.length(); ){
    char ch = src[i];
    result.push_back(ch);
    i++;
    int cnt =1;
    while(src[i] == ch){
        cnt++;
        i++;
    }
    result.append(to_string(cnt));
  }
  return result;
}     
