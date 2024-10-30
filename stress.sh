#!/usr/bin/bash
# To color the output text in different colours.
green=$(tput setaf 71);
red=$(tput setaf 1);
blue=$(tput setaf 32);
orange=$(tput setaf 178);
bold=$(tput bold);
reset=$(tput sgr0);

echo "Compiling Codes"

g++ -std=gnu++20 -O2 -DLOCAL -Wall -o test_gen test_gen.cpp
g++ -std=gnu++20 -O2 -DLOCAL -Wall -o sol sol.cpp
g++ -std=gnu++20 -O2 -DLOCAL -Wall -o brute brute.cpp

for ((i = 1; ; i++)); do
    ./test_gen > input.txt
    if diff -w <(./sol < input.txt) <(./brute < input.txt); then
      echo "${orange} test_case # $i: ${bold}${green} Accepted ${reset}"
    else
      echo "${orange} test_case # $i: ${bold}${red} Wrong Answer ${reset}"
      echo "${blue} Input: ${reset}"
        cat input.txt
      echo ""
    break
  fi
done
