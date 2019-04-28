yacc -d ex1.y
lex ex1.l
gcc y.tab.c lex.yy.c -o ex1.exe
./ex1.exe test.txt
gdb ex1.exe
