#include "scanner.hpp"
#include <filesystem>
#include <iostream>
using namespace std;
namespace fs=std::filesystem;

vector<FileInfo> scanDirectory(const string& path){
  vector<FileInfo> files;
  
  try{
    for (const auto& entry : fs::recursive_directory_iterator(path)){
      if (entry.is_regular_file()){
        FileInfo file;
        
        file.name = entry.path().filename().string();
        file.path = entry.path().string();
        file.size = entry.file_size();
        
        files.push_back(file);
      }
    }
  }
  
  catch (const fs::filesystem_error& e){
    cerr << "Filesystem Error: " << e.what() << endl;
  }
  
  return files;
}
