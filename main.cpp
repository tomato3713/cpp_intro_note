int main(int argc, char const *argv[]) {
  std::cout << "hello world!" << std::endl;

  std::vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }
  std::cout << v.at(5) << std::endl;
  return 0;
}
