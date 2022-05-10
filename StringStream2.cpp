#include <iostream>
#include <string>

/*
Input:
abcd
ef

Output:
4 2
abcdef
ebcd af
*/

int main(){

  std::string str1, str2, str3;
  char b, a;
  int strlen1, strlen2;
  
  std::cin >> str1;
  std::cin >> str2;
    
  strlen1 = str1.size();
  strlen2 = str2.size();
  
  std::cout << strlen1;
  std::cout << " " << strlen2;
    
  str3 = str1 + str2;
  std::cout << "\n" << str3;

  a = str2[0];
  b = str1[0];        
  
  str1[0] = a;
  str2[0] = b;
  
  std::cout << "\n";
  std::cout << str1;

  std::cout << " " << str2;
  
  return 0;

}