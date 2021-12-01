def solution(n, arr1, arr2):
    answer = []
    for a1, a2 in zip(arr1, arr2):    # arr1과 arr2를 zip()으로 묶기
        a = str(bin(a1 | a2))[2:]     # a1 OR a2를 binary로 바꿔주는 bin() function을 통해 2진수로 바꿔준 후, 불필요한 맨 앞 2자리를 버리기 위해 string으로 변환 후 index slicing
        a = '0' * (n - len(a)) + a    # index slicing을 하게되면, 0으로 시작하는 2진수의 0들이 사라지기 때문에 입력받은 n의 길이에서 숫자만큼의 수를 뺀만큼 '0'을 곱하고 그 숫자를 더해준다.
        a = a.replace('1',"#")        # 1은 #으로 replace
        a = a.replace('0', " ")       # 0은 공백으로 replace
        
        answer.append(a)

    return answer
print(solution(6,[9,20,28,18,11],[30,1,21,17,28]))