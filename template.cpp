
// テンプレートによって、異なる型の詳細を知らなくても、汎用性のある関数をかける
template <typename T>
T twice(T n)
{
    T x = n;
    return x*2;
}

twice(3);
twice(3.0);
twice<int>(3);
twice<double>(3.0);

// テンプレート引数は、整数型の値を渡すこともできるので下記のようにもかける
// ただし、コンパイル時に全てが決定されるので、渡す値はコンパイル時に決定できるものでなくてはいけない。
template <int N>
void f()
{
    std::cout << N;
}
f<0>();

// テンプレートは、クラスにも使用可能
template < typename T, std::size_t N >
struct array
{
    T storage[N] ;

    T & operator [] ( std::size_t i )
    {
        return storage[i] ;
    }
} ;
