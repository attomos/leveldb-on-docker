#include <cassert>
#include <leveldb/db.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  leveldb::Status status = leveldb::DB::Open(options, "/tmp/data", &db);
  assert(status.ok());

  string key = "firstname";
  string value = "Nattaphoom";
  cout << "write key: " << key << " and value: " << value << endl;
  status = db->Put(leveldb::WriteOptions(), key, value);
  assert(status.ok());

  key = "lastname";
  value = "Chaipreecha";
  cout << "write key: " << key << " and value: " << value << endl;
  status = db->Put(leveldb::WriteOptions(), key, value);
  assert(status.ok());

  string read_result;
  status = db->Get(leveldb::ReadOptions(), key, &read_result);

  cout << "Read data: " << read_result << endl;
  assert(status.ok());

  assert(value == read_result);

  delete db;
  return 0;
}
