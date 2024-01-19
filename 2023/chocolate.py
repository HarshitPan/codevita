#chocolate boy - bag transfer
a=input()
b=int(input())
list = a.split(' ')
int_list=[]
for i in list:
    if(i!=''): 
        int_list.append(int(i))
int_list.sort()
start=0
end=len(int_list)-1
points=1
max_points=1
while(start<=end):
    while(b>=int_list[start]):
        
        points+=1
        if(points>max_points): max_points=points
        b=b-int_list[start]
        #print("here ",b,int_list[start],points)
        start+=1
    points-=1
    b=b+int_list[end]
    #print("here2 ",b,int_list[end],points)
    end-=1

#print(points)
print(max_points)
#print(int_list)