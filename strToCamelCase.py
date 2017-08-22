# python3
# 
# Sample Input:  min value array
# Sample Output: minValueArray
#
inputString = input().strip().split(' ')

result = inputString[0]

for i in range(1,len(inputString)):
	result += inputString[i][0].upper() + inputString[i][1:]

print (result)