import random

if __name__ == '__main__':
    a = random.random()
    if a > 0.5:
        print('error')
        exit(1)
    else:
        print('success')