num = int(input())

def isEven(num):
    if(num^1)==(num+1):
        return 1
    else:
        return 0
if isEven(num)==1:
    print("Even")
else:
    print("Odd")
    