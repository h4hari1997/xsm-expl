lex label.l
gcc lex.yy.c
./a.out
cd ..
./xsm -l library.lib -e stage7/code.xsm --debug
