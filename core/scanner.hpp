#pragma once
#include <vector>
#include <string>
#include "fileinfo.hpp"
using namespace std;

vector<FileInfo> scanDirectory(const string& path);
