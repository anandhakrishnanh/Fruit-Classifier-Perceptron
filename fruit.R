w=c(0,0,0,0,0)
dw=c(0,0,0,0,0)
x=c(0,0,0,0,0)
y=0
l=0.25

print("The following convention needs to be used:
        Taste: Sweet=1 Not sweet=0
        Seeds: Edible=1 Not edible=0
        Skin Edible=1 Not edible=0
      
      
      ")
print("This is the training session:")
print("The question session is going to start\nEnter the three qualities of the fruit in question")
for(i in 1:1000){
  y=0
  for(j in 1:3){
    print("Enter the quality of the fruit")
    x[j]=scan()
    y=y+w[j]*x[j]
    if(y>0.4)
      y2=1
    if(y<=0.4)
      y2=0}
  print(y2)
  print("Enter the actual value of the fruit")
  y1=scan()
  if(y2!=y1)
    for(j in 1:3){
      dw[j]=(y1-y2)*x[j]*l
      print(l)
      w[j]=w[j]+dw[j]
      print(w[j])}
  if(y2==y1)
    print("The output matched")
  print("Do you want to go to stop trainging(Y/N):
        1= Continue
        0=Stop")
  dec1=scan()
  if(dec1==0)
    break
}
for(k in 1:100){
  print("Enter the qualities of the testing fruit")
  x1=scan()
  x2=scan()
  x3=scan()
  y=w[1]*x1+w[2]*x2+w[3]*x3
  if(y>0.4)
    print("The answer is 1 hence a Good Fruit")
  if(y<=0.4)
    print("The answer is 0 hence a Bad Fruit")
  print("Do you want to continue 
        1: Continue
        0: End Code")
  m=scan()
  if(m==0)
  break
}
