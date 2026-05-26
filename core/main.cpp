#include <iostream>
#include <vector>
#include "scanner.hpp"
#include "fileinfo.hpp"
using namespace std;

int main(int argc, char* argv[]){
  if (argc<2){
    cout<< "Usage: ./baum <directory_path>" <<endl;
    return 1;
  }
  
  string directoryPath = argv[1];
  
  vector<FileInfo> files = scanDirectory(directoryPath);
  
  for (const auto& file : files){
    cout<<"Name : " << file.name << endl;
    cout << "Path : " << file.path << endl;
    cout << "Size : " << file.size << "bytes" << endl;
    cout << "----------------------------" << endl;
  }
  
  return 0;
}

