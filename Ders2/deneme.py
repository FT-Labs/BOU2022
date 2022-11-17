#!/usr/bin/env python

class Bogazici():
    def __init__(self, a):
        self.a = a

    def printa(self):
        print(self.a)


def biseyleryap(bogazici):
    bogazici.a = -100

if __name__ == "__main__":
    bogazici = Bogazici(5)

    bogazici.printa()

    biseyleryap(bogazici)

    bogazici.printa()
