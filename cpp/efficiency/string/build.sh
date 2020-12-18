g++ -g -c -I../utils -std=c++11 -m64 str_concat.cpp -o str_concat.o
g++ -g -m64 str_concat.o -o str_concat 
./str_concat
rm *.o 
rm str_concat
