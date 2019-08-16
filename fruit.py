#initialise the variables
l=0.25 #learnign rate
y=0
w=[0,0,0,0] #inital value of weights 
dw=[0,0,0,0,0,0,0,0,0,0,0,0,0]
print("The following convention needs to be used:\nTaste: Sweet=1 Not sweet=0\nSeeds: Edible=1 Not edible=0\nSkin Edible=1 Not edible=0");
#We are now training the perceptron
#-----------------------------------------------------------------------
print("\nThis is the training session:\n")
i=1
x=[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]
while True:
    y=0
    j=1
    while j<=3:
        print("The weights are "+str(w[1])+" "+str(w[2])+" "+str(w[3]))
        x[i][j]=int(input("Enter the qualities of the fruit\n"))
        print("The entered number is "+str(x[i][j]))
        y = y + (w[j] * x[i][j])
        if y>0.4:
            y2=1
        else:
            y2=0
        j=j+1
    print("\nThe obtained value of the "+str(i)+"th fruit is : "+str(y)+" hence the output is "+str(y2))
    yl=int(input("Enter the actual value of "+str(i)+"th fruit"))
    print(yl)
    if(y2!=yl):
        j=1
        while j<=3:
            print("\nThe weight is :"+str(w[j]))
            dw[j] = (yl - y2) * x[i][j] * l
            print("l="+str(l)+"\n")
            w[j] = w[j] + dw[j]
            print("Now the weight is :"+str(w[j]))
            j=j+1
    else:
        print("The output of the computer and user matched we go on to the next fruit\n")
    print("Do you want to stop the training (Y/N) : \n")
    print("Enter 1=Learning to continue and 0=Learning to stop\n")
    dec=input()
    i=i+1
    if dec==0:
        break
#This is the testing phase
#-------------------------------------------------------------
while True:
    print("Enter the qualities of the testing fruit\n")
    #taking the input features of the testing fruit
    x1=input()
    x2=input()
    x3=input()
    y = w[1] * x1 + w[2] * x2 + w[3] * x3 
    if y>0.4:
        print("The answer is one hence the fruit is good\n")
    else:
        print("The answer is zero hence the fruit is bad\n")
    print("Do you want to continue testing...\nEnter 1: Continue     Enter 0:End Code\n")
    m=input(":")
    if(m==0):
        break









