#pragma once
#include <string>
#include <cstdint>
using namespace std;

struct FileInfo{
  string name;
  string path;
  
  uintmax_t size;
};
