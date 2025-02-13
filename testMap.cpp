#include <map>
#include <iostream>

using namespace  std;

int main() {
  map<string, int> mapExample;
  mapExample["first"] = 1;
  mapExample["second"] = 2;
  map<string, int> harga_barang;

  harga_barang["Apel"] = 85;
  harga_barang["Anggur"] = 175;
  harga_barang["Pisang"] = 75;

  cout << "Harga Apel adalah: " << harga_barang["Apel"] << endl;
  cout << "Harga Anggur adalah: " << harga_barang["Anggur"] << endl;
  cout << "Harga Pisang adalah: " << harga_barang["Pisang"] << endl;
  

  if (mapExample.find("first") != mapExample.end()) {
    cout << "Key 'first' found" << endl;
  } else {
    cout << "Key 'first' not found" << endl;
  }
  return 0;
}
