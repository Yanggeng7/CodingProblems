#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

bool checkSubStringInString(std::string subString, std::string originString){
  
  int originSize = originString.length();
  int subSize = subString.length();

  if(originSize < subSize)
    return false;

  for(int i = 0; i <= (originSize-subSize); i++){
    int j;
    for(j = 0; j < subSize; j++){
      if(subString[j] != originString[i+j])
        break;
      
      if(j == subSize)
        return true;
      }
    }
  
  return false;
}

bool checkStringUnique(std::string inputString){
  std::unordered_set<char> stringSet;
  for(int i = 0; i < inputString.length(); i++){
    if(stringSet.find(inputString[i]) == stringSet.end())
      stringSet.insert(inputString[i]);
    else
      return false;
  }
  return true;
}

std::vector<std::string> getSubString(std::string inputString){
  std::vector<std::string> subStringList;

  return subStringList;
}