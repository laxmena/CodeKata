#Python3
word = list(input().strip())

for i in range(0,len(word),2):
	if(i+1>=len(word)):
		break
	word[i],word[i+1] = word[i+1],word[i]

print(''.join(word))