# -*- coding: utf-8 -*-

while True:

    try:
        N, M = input().split()
        N = int(N)
        M = int(M)

        i = 0
        grades = []
        grades.clear()
        aux = [] * N

        aux = input()

        aux = aux.split()


        for i in range(0, len(aux)):
            if aux[i] != " ":
                grades.append(float(aux[i]))
            #print(grades)


        total = (N*(N-1)*(N-2))/(3*2*1)
        finalGrade = []
        finalGrade.clear()

        j = 0
        k = 1
        l = 1

        i = 0


        while i < int(total):
            #print(i)
            if l == N-1:
                    k += 1
                    l = k + 1

            else:
                l += 1

            result = (float(grades[j]) + float(grades[k]) + float(grades[l]))/3
            finalGrade.append(result)
            #print(j, k, l)
            i += 1

            if l == N-1 and l == k+1:
                    i += 1
                    if int(total) != 1:
                        #print(i)
                        j += 1
                        k = j+1
                        l = k+1
                        result = (float(grades[j]) + float(grades[k]) + float(grades[l]))/3
                        finalGrade.append(result)
                    #print(j, k, l)

            #print(result)
            #print("{} {}".format('j', j))
            #print("{} {}".format('k', k))
            #print("{} {}".format('l', l))


        finalGrade.sort(reverse = True)

        #print(M)

        #print(finalGrade)
        print("{:.1f}".format(finalGrade[M-1]))


    except EOFError:
        break;
