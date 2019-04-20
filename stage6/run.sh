yacc -d ex1.y
lex ex1.l
gcc y.tab.c lex.yy.c -o ex1.exe
./ex1.exe test.txt
lex label.l
gcc lex.yy.c
./a.out
rm a.out
cd ..
./xsm -l library.lib -e stage6/code.xsm --debug
