# ターゲット: 事前要件
# <tab>レシピ
#
# .PHONYを利用すると、ターゲットと同名のファイルが有っても実行ターゲットの実行
# が可能になる。

gcc_options = -std=c++17 -Wall --pedantic-errors

program : main.cpp all.h all.h.gch
	g++ $(gcc_options) -include all.h $< -o $@

all.h.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

run : program
	./program

clean :
	rm -f ./program
	    rm -f ./all.h.gch

.PHONY : run clean
