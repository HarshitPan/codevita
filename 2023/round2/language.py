dict={}

list=[]
till_end=[]
var=[]
while(True):
    str=input()
    if(str==''):
        continue
    temp=str.split(" ")
    if(len(till_end)<=0):
        if(temp[0]!='is'):
            var=temp.copy()
            break
        else:
            pass
    if(temp[0]=="is"):
        till_end.append("is")
    elif (temp[0]=="si"):
        till_end.pop(0)
    list.append(temp)
    #print(len(till_end))

val=input().split(" ")
if(val[0]==''):
    val=input().split(" ")

for i in range(len(var)):
    dict[var[i]]=val[i]
#print(list)
i=0
while(i<len(list)):
    cmd=list[i]
    #print(cmd)
    if(cmd[0]=='is'):
        bool=True
        if "==" in cmd[1]:
            bool= dict[cmd[1][0]] == dict[cmd[1][-1]]
        if "!=" in cmd[1]:
            bool= dict[cmd[1][0]] != dict[cmd[1][-1]]
        if "<" in cmd[1]:
            bool= dict[cmd[1][0]] < dict[cmd[1][-1]]
        if ">" in cmd[1]:
            bool= dict[cmd[1][0]] > dict[cmd[1][-1]]
        if(bool):
            j=i+1
            temp=["is"]
            while(True):
                if(list[j][0]=='is'):
                    temp.append("is")
                elif(list[j][0]=="si"):
                    temp.pop(0)
                if(len(temp)==0):
                    break
                j+=1
            while(list[j][0]!="No" and j!=i):
                j-=1
            if(j==i):
                i+=1
                continue
            else:
                while(True):
                    if(list[j][0]!='si'):
                        list.pop(j)
                    else:
                        break
        else:
            j=i+1
            last=i
            temp=["is"]
            while(True):
                if(list[j][0]=="No" and len(temp)==1):
                    last=j
                if(list[j][0]=='is'):
                    temp.append("is")
                elif(list[j][0]=="si"):
                    temp.pop(0)
                if(len(temp)==0):
                    break
                j+=1
            if(last==i):
                i=j
            else:
                i=last
            
            
    if(cmd[0]=="print"):
         print(dict[cmd[1]])
    i+=1
#print(dict)

