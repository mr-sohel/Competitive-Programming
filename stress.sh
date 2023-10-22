#!/bin/sh
echo "Enter the name of first File : "
read file
echo "Enter the name of second File : "
read file2
g++ -o test_gen test_gen.cpp
g++ -o $file $file.cpp
g++ -o $file2 $file2.cpp
while true
do  
   ./test_gen
   ./$file <input.txt> out1.txt
   ./$file2 <input.txt> out2.txt
   if cmp -s "out1.txt" "out2.txt"; then
 echo "Test Case OK"
   else
 echo "ERROR ENCOUNTERED"
echo "$(<input.txt)"
 break
   fi
done

