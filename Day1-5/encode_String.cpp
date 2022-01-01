string encode(string arr)
{     
  string ans = "";
  int count = 1;
  for(int i = 1; i<arr.length(); i++){
      if(arr[i] == arr[i-1])
      count++;
      else{
          ans += arr[i-1] + to_string(count);
          count = 1;
      }
  }
  ans += arr[arr.length()-1] + to_string(count);
  return ans;
}     
