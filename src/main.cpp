/* MIT License
Copyright (c) 2020 Emir Ensar All Rights Reserved.
Distributed under the terms of the MIT License.
*/

// Huge thanks for ferhatgec(https://github.com/ferhatgec)

// include part from the ferhatgec/scrift
#include <sstream>
#include <ctype.h>
#include <fstream>
#include <memory>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <filesystem>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdarg.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <stdbool.h>
#include <thread>
#include <string>
#include <ctime>
#include "../include/ExecutePlusPlus.hpp"


using namespace std;
int main() {
  ExecutePlusPlus ex;
  char hostname[HOST_NAME_MAX];
  time_t ttime = time(0);
  char* dt = ctime(&ttime);
  gethostname(hostname, HOST_NAME_MAX);
  cout <<"Welcome to IntelliShell, " << getenv("USER") << "!\n";
  cout << "The current local date and time is: " << dt;
  std::string shell;
    do {
      cout << getenv("USER") << "@" << hostname << " | " << get_current_dir_name() <<  " -> ";
      getline(cin, shell);
      ex.RunFunction(shell.c_str());
    }
    while(shell != "exit");
  return 0;
}