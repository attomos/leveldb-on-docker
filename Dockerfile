FROM ubuntu:14.04

RUN apt-get update && \
    apt-get install -y git-core apt-transport-https ca-certificates apparmor curl vim

RUN apt-get install -y make build-essential g++ libsnappy-dev libleveldb-dev libleveldb1

WORKDIR /tmp

ADD . /tmp

VOLUME ["/tmp"]
