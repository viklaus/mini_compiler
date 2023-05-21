#!/bin/bash

if [[ $1  == "-input" && $3 == "" ]];then
	# if test -f "./a.out"; then
	# 	cat $2 | ./a.out>>"ast.dot" 1>hi.txt 2>err.txt
	# 	dot AST.dot -T png -o AST.png
	# else
		bison -v -d --defines=parser.hpp --output=parser.cpp parser.y++ 
		flex lexer.l
		g++ lex.yy.c parser.cpp ast.cpp typecheck.cpp symTable.cpp codegen.cpp 3ac.cpp 2>err.txt
		cat $2 | ./a.out "ast.dot" 
		dot ast.dot -T png -o AST.png 
	# fi
elif [[ $1 == "-input" && $3 == "-out" ]];then 1>/dev/null
	if test -f "./a.out"; then
		cat $2 | ./a.out $4 1>/dev/null
		dot $4 -T png -o AST.png
	else
		bison -v -d --defines=parser.hpp --output=parser.cpp parser.y++
		flex lexer.l
		g++ lex.yy.c parser.cpp ast.cpp
		cat $2 | ./a.out $4
		dot $4 -T png -o AST.png
	fi
elif [[ $1 == "-help" ]];then
	echo "It generates the Abstract Syntax Tree (in DOT format) for the given input Java program"
elif [[ $1 == "-verbose" ]];then
	echo "To run the binary, use -input flag to give the input file"
	echo "Use -out to give the output file. If not given, the output would be produced at ast.dot"
	echo "Use -help for help"
	echo "The final execution procedure should be ./driver -input in.java [-out output]"

fi