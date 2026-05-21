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
string cut(string &s){
  int i=0;
  while(i<s.size() && s[i]!=' '){
    i++;
  }
  while(i<s.size() && s[i]==' '){
    i++;
  }
  return s.substr(i+1);
}
int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  while(1){
  std::cout << "$ ";
  string s;
  getline(cin,s);
  string token1=truncate(s);
    if(token1!="exit"){
      if(token1=="echo"){
        cout<<cut(s)<<endl;
        continue; 
      }
      if(token1=="type"){
        string token2=cut(s);
        if(token2=="type" || token2=="exit" || token2=="echo"){
          cout<<token2<<" is a shell builtin\n";
        }
        else{
          cout<<token2<<": not found\n";
        }
      }
      cout<<s<<": command not found\n";
    }
    else{
      break;
    }
  }
}
