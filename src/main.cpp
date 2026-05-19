#include <iostream>
#include <string>
using namespace std;
string truncate(string &s){
  int i=0;
  while(i<s.size() && s[i]!=' '){
    i++;
  }
  return s.substr(0,i);
}
int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  while(1){
  std::cout << "$ ";
  string s;
  cin>> s;
  string token1=truncate(s);
    if(token1!="exit"){
      cout<<s<<": command not found\n";
    }
    else{
      break;
    }
  }
}
