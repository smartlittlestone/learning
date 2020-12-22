SRC=$1
BIN=`echo ${SRC%.*}`
OBJ=$BIN".o"
g++ -g -c -I../utils -std=c++11 -m64 $SRC -o $OBJ
g++ -g -m64 $OBJ -o $BIN 
./$BIN
rm $OBJ $BIN
