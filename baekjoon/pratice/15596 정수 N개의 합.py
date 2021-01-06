# a : 합을 구해야 하는 정수 n 개가 저장되어 있는 리스트
# return : a안의 정수 합

def IntSum(sum_list):
    sum_value = 0
    for i in sum_list:
        sum_value += i
    return sum_value

sum_list = [1,2,3,4]
print(IntSum(sum_list))