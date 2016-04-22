FROM ubuntu:latest
MAINTAINER Yoshi Yamaguchi ymotongpoo

RUN apt-get update && apt-get upgrade -y
RUN apt-get install -y \
  build-essential \
  gcc \
  unzip \
  wget \
  zip \
  gcc-avr \
  binutils-avr \
  avr-libc \
  dfu-util \
  git-core
RUN mkdir -p /home/ergodox 
RUN useradd -s /bin/bash ergodox
RUN chown ergodox /home/ergodox
RUN mkdir -p /pipeline/build
RUN chown ergodox /pipeline/build
RUN chmod 777 /pipeline/build
RUN mkdir -p /drone/src
RUN chown ergodox /drone/src
RUN chmod 777 /drone/src
RUN echo 'ergodox ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers
USER ergodox
WORKDIR /home/ergodox
