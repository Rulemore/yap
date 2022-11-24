import random
f=open('6.3input.txt','w')
mas=[i for i in  range (1,100000)]
random.shuffle(mas)
mn=[]
for i in  range(len(mas)):
    f.write(str(mas[i])+'\n')
f.close()
