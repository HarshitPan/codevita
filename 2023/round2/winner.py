
def checkPalindrome(s):
    i=len(s)-1
    j=i-1
    str1=s[i]
    str2=s[i]
    while(j>=0):
        str1=str1+s[j]
        str2=s[j]+str2
        if(str1==str2):
            return True
        j-=1
    return False

names=input()
n=int(input())
list=names.split(" ")
#print(list)
#print(n)
str=""
#round1
i=0
while(i<len(list)):
    temp=str+list[i][0].lower()
    #print(temp)
    bool=checkPalindrome(temp)
    if(bool):
        list.pop(i)
        i-=1
    else:
        str=temp
    i+=1
#print(list)
n-=1
if(len(list)>n):
    pass
else:   
    while(len(list)!=1):
        temp=n%len(list)
        list.pop(n%len(list))
       #print(list)
print(list[0])

