# cook your dish here
t = int(input())
while(t):
    s1 = str(input())
    s2 = str(input())
    
    s1len = len(s1)
    s2len = len(s2)
    
    if(not(s1len==s2len)):
        t -= 1
        print("No")
        continue
    
    match = True
    for i in range(s1len):
        if(not(s1[i]==s2[i])):
            if((s1[i]=='?') or (s2[i]=='?')):
                continue
            else:
                match = False
                break
    
    if (match):
        print("Yes")
    else:
        print("No")
    
    t -= 1