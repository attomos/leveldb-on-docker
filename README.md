# How to run this project

1. Clone this repo `git clone git@github.com:attomos/leveldb-on-docker.git` and `cd` into it.
1. Run `docker build -t hello-leveldb .` to build `hello-leveldb` image.
2. Run `docker run --name leveldb-instance -i -t hello-leveldb` to launch container.


# Inside container

## Compile

    make run

## Run demo program


    ./a.out


# References

- https://db-engines.com/en/system/LevelDB%3BRedis
- http://chimera.labs.oreilly.com/books/1234000001802/ch07.html?intcmp=il-na-books-videos-lp-bc15_20141218_radar_mastering_bitcoin_excerpt_chapter_seven
- https://bitcoin.stackexchange.com/questions/48959/why-is-bitcoin-core-using-leveldb-instead-of-redis-or-sqlite
- http://wiki.dreamrunner.org/public_html/C-C++/Library-Notes/LevelDB.html
