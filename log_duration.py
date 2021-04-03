#!/usr/bin/python3


import getter
from time import time


class Logger:

    def set(self):
        self.start = time()

    def get(self):
        return 1000 * (time() - self.start)


def main():
    logger = Logger()

    logger.set()
    i = 4000000
    for i in range(4000000):
        getter.getFieldStr()
    print("str: {} ms".format(logger.get()))

    logger.set()
    for i in range(4000000):
        getter.getFieldInt()
    print("int: {} ms".format(logger.get()))


if __name__ == '__main__':
    main()
