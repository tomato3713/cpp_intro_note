/*
 * This is a header file that contains almost all of the C ++ standard library.
 * Ref: https://ezoeryou.github.io/cpp-intro/
 *
 * 他のファイルからall.hのみをインクルードすれば標準ライブラリのほとんどを使え
 * るようになる。
 * なお、プリコンパイル済ヘッダーは1つしか使用できない。
 *
 * コンパイル済ヘッダーの生成コマンド
 * $ g++ -std=c++17 -Wall --pedantic-errors -x c++-header -o all.h.gch all.h
 *
 * コンパイル時は、こうする。
 * $ g++ -std=c++17 -Wall --pedantic-errors -include all.h -o program main.cpp
 *
 * コンパイル済ヘッダを使用するとコンパイル時間が短くなる。
 * ↓コンパイル済ヘッダを使用しない場合。
 * real	0m1.639s
 * user	0m1.546s
 * sys	0m0.084s
 * ↓コンパイル済ヘッダを使用した場合。かなり高速化されていることがわかる。
 * real	0m0.368s
 * user	0m0.329s
 * sys	0m0.037s
 */

#include <cassert>
#include <cerrno>
#include <cfloat>
#include <climits>
#include <cstdalign>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <exception>
#include <initializer_list>
#include <limits>
#include <new>
#include <stdexcept>
#include <string>
#include <system_error>
#include <typeinfo>

#if __has_include(<string_view>)
#include <string_view>
#endif

#include <algorithm>
#include <array>
#include <cfenv>
#include <cmath>
#include <deque>
#include <forward_list>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <streambuf>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#if __has_include(<filesystem>)
#include <filesystem>
#endif

#include <cinttypes>
#include <cstdio>

#include <atomic>
#include <condition_variable>
#include <future>
#include <mutex>
#include <regex>
#include <shared_mutex>
#include <thread>

using namespace std::literals;
