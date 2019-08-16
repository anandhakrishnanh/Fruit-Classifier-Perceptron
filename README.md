# Fruit-Classifier-Perceptron
This is to classify any types of fruit into good or bad by first learning what a good fruit is and what a bad one is.
This will discribe how the Python Version of the code is being run. This will apply to C and R as well with only changes being the syntax.

We are using a single neuron for this task with 3 inputs and a single output

First we start with the following perceptron

![image1](https://user-images.githubusercontent.com/42119760/63162100-5ef38100-c03f-11e9-9ee1-82e907170a06.PNG)

During the training phase, we enter the qualities of known fruits 


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
 
 After entering the value of the first fruit the perceptron will look something like this, 
![image](https://user-images.githubusercontent.com/42119760/63162583-9151ae00-c040-11e9-95b2-6b546be8bfe8.png)


**y** will return the output of the neuron that is the sum of the products of the weights and inputs 

The value of **y** is then passed through a step activation function that takes the value 1 if y>=0.4 and 0 otherwise.

Since the weights are initally zero the output will be 0 even though the expected output should be 1

Whenever the observed output and the expected output is different we run the next code.
    
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
        
The above is where the weights are leart using the **Perceptron Learning Rule** 

**∆w = learning rate X (teacher provided class – predicted  class) X node input**

In our first case we have 
Learning rate = 0.25
teacher provided class – predicted  class = 1
node input = 1 ( for the first input node ) 
∆w = 0.25 X 1 X 1 = 0.25

∆w tells us how much we should change the respective nodes of the perceptron. In our case we will change the first node weight to 0.25 using the above result.

Similarly all the weights are changed for the respective input. And finally it would look something like this 

![image](https://user-images.githubusercontent.com/42119760/63163037-e4783080-c041-11e9-8f68-626d0a71d06e.png)

Similarly the entire process is done as much as we want. The general rule is that the more we train the better our output will be.

``After training for 10 train fruits the weights are 0.5, 0.25 and 0.25``

Now comes the testing phase where we once again show the perceptron 3 features of a fruit 

    x1=input()
    x2=input()
    x3=input()
    y = w[1] * x1 + w[2] * x2 + w[3] * x3 
    if y>0.4:
        print("The answer is one hence the fruit is good\n")
    else:
        print("The answer is zero hence the fruit is bad\n")

We now test the perceptron with features of a fruit it has never seen i.e., never has been trained to indentify 

![image](https://user-images.githubusercontent.com/42119760/63163330-ba733e00-c042-11e9-96e7-4aef584cbd29.png)


Now with all the new weights the perceptron is able to accuratly detect the fruit, even though it has never seen this. 
