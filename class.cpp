struct class_name {
  int x;
  int y;

  // constructor
  // x(x) でデータメンバーxを初期化できる
  // class_name a = 1; としてclass_nameを初期化することもできる。その場合は、コ
  // ンストラクターの引数が1つのものが呼ばれる。
  class_name(int x) : x(x), y(1) {
    // オブジェクト初期化後実行
  }
  // デリゲートコンストラクターと呼ばれる方法
  class_name(int x, int y) : x(x), y(y) {
    // オブジェクト初期化後実行
  }
  // こういう書き方もできる。
  // 初期化処理を別のコンストラクターを呼ぶことで丸投げする。
  class_name(int x) : class_name(x, 1) {}

  // Destructor
  ~class_name() {
    // オブジェクト破棄時に実行
  }
};

// 演算子のオーバーラップ
// 下記のように記述することで class_name a, b; class_name c = a + b;
// が実行できるようになる。
// Ex: +
class_name operator+(class_name const &l, class_name const &r) {
  return class_name{l.x + r.x, l.y + r.y};
}

// 単項演算子の場合
// class_name a; +a;
class_name operator+(class_name const &obj) { return class_name{+obj.x}; }

// 前置のインクリメント・デクリメント
class_name operator++(class_name &obj) {
  ++obj.x;
  return obj;
}
// ただし、後置のインクリメント・デクリメントの場合は特殊な書き方を行う。
// 2つめのint型引数は、ダミーで前置と後置演算子を区別するため以外の意味は無い。
class_name operator++(class_name &obj, int) {
  auto temp = obj;
  ++obj.x;
  return temp;
}

// 演算子のオーバーロードは、メンバー関数としてもかける
// S a, b; a + b;
struct S {
  S operator+(S const &right) { return S{}; }
}
