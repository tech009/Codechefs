testcases = int(input())
while(testcases):

    N,M,E = list(map(int,str(input()).split(' ')))
    A = []
    B = []
    tmp = []

    for i in range(N):
        inp = str(input())
        count = 0
        for dig in inp:
            tmp.insert(count,dig)
            count += 1
        A.insert(i,tmp)
        tmp = []
    
    for i in range(N):
        inp = str(input())
        count = 0
        for dig in inp:
            tmp.insert(count,dig)
            count += 1
        B.insert(i,tmp)
        tmp = []

    flag = False
    for i in range(N):
        for j in range(M):
            if(A[i][j] != B[i][j]):
                flag = True
                break
        if(flag):
            break

    if(not flag):
        print(0)
    
    if(flag):
        row_odd = (N%4)
        col_odd = (M%4)

        if(row_odd and col_odd):
            print(-1)
            testcases -= 1
            continue

        if((not row_odd) and (not col_odd)):
            if (N<=M):
                if(E==0):
                    print(int((N/4)*M))
                else:
                    print(int((N/4)*M))
                    for i in range(N):
                        count = 0
                        ind = 0
                        for j in range(M):
                            if(A[i][j]==B[i][j]):
                                continue
                            count += 1
                            if(count == 1):
                                ind = j
                            if(count == 2):
                                print("R {} {} {}".format((i+1),(ind+1),(j+1)))
                            count %= 2
            
            else:
                if(E==0):
                    print(int((M/4)*N))
                else:
                    print(int((M/4)*N))
                    for i in range(M):
                        count = 0
                        ind = 0
                        for j in range(N):
                            if(A[j][i]==B[j][i]):
                                continue
                            count += 1
                            if(count == 1):
                                ind = i
                            if(count == 2):
                                print("C {} {} {}".format((i+1),(ind+1),(j+1)))
                            count %= 2
            testcases -= 1
            continue

            if(not row_odd):
                if(E==0):
                    print(int((N/4)*M))
                else:
                    print(int((N/4)*M))
                    for i in range(N):
                        count = 0
                        ind = 0
                        for j in range(M):
                            if(A[i][j]==B[i][j]):
                                continue
                            count += 1
                            if(count == 1):
                                ind = j
                            if(count == 2):
                                print("R {} {} {}".format((i+1),(ind+1),(j+1)))
                            count %= 2
                testcases -= 1
                continue

            if(not col_odd):
                if(E==0):
                    print(int((N/4)*M))
                else:
                    print(int((N/4)*M))
                    for i in range(N):
                        count = 0
                        ind = 0
                        for j in range(M):
                            if(A[i][j]==B[i][j]):
                                continue
                            count += 1
                            if(count == 1):
                                ind = j
                            if(count == 2):
                                print("R {} {} {}".format((i+1),(ind+1),(j+1)))
                            count %= 2
                testcases -= 1
                continue
    testcases -= 1