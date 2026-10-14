import random


def wangsenlin(name):
    print(name + "from another scripts")


def guess_number():
    number = random.randint(1, 100)
    guess = int(input("请输入一个整数[1, 100] ----> "))
    while guess != number:
        if guess > number:
            print("猜大了")
        else:
            print("猜小了")
        guess = int(input("请输入一个整数[1, 100] ----> "))
    print("\n恭喜你猜对啦，数字是", str(guess))


def addition(a, b):
    print("加法计算结果", a+b)


def decrease(a, b):
    print("减法计算结果", a-b)


def multiply(a, b):
    print("乘法计算结果", a*b)


#def division(a, b):
    #print("乘法计算结果", a/b)


def print ('Hello,World!')








