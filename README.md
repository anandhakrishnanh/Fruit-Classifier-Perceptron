<div align="center">

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

</div>


<!-- PROJECT LOGO -->
<br />
<div align="center">

  <h3 align="center">Fruit-Classifier-Perceptron</h3>

  <p align="center">
    A standalone implementation of a simple Perceptron in C, R and Python. 
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#How it Works">How it Works</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

This is to classify any types of fruit into good or bad by first learning what a good fruit is and 
what a bad one is based on 3 features that the user trains with, Taste, edibility of Seeds and edibility of the Skin. 
This maybe useless since all popular languages will come with libraries that will create
thousands of perceptrons in a single line but this is useful for a full understand of how one works. 

This documentation will describe how the Python Version of the code is being run but you can apply the 
same logic to the R and C version as well. 

<p align="right">(<a href="#top">back to top</a>)</p>


### Built With

This section should list any major frameworks/libraries used to bootstrap your project. Leave any add-ons/plugins for the acknowledgements section. Here are a few examples.

* [R](https://www.r-project.org/about.html)
* [C](https://en.wikipedia.org/wiki/C_(programming_language))
* [Python](https://www.python.org/)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started

You will need to have the proper IDE / environments to run languages, no libraries were used so 
this code will be compatible with most versions of the language. 

### Prerequisites

I have used the below IDEs for the languages
* R : R Studio
* C : Command Line 
* Python : Command Line

<!-- USAGE EXAMPLES -->
## Usage

Running the script is very straight forward, just run the corresponding script, Example : python3 fruit.c or ./fruit.sh after compiling with C

<!-- USAGE EXAMPLES -->
## How it Works

1. We first initialize a single neutron with three inputs, a single output. All the weights are initially set
to zero. The algorithm used as the activation function is 

```
if sum(weight1, weight2, weight3) > 0.4:
    Fruit 
else:
    Not a Fruit
```

You can visualize the above neutron as below

![image1](https://user-images.githubusercontent.com/42119760/63162100-5ef38100-c03f-11e9-9ee1-82e907170a06.PNG)

2. ####Training phase : We train the neutron with a few known classes. First we train with a fruit having good taste,
edible seeds and edible skin. So the input would be (1,1,0) as below 

![image](https://user-images.githubusercontent.com/42119760/63162583-9151ae00-c040-11e9-95b2-6b546be8bfe8.png)

We feed this input the code 

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
 
And we will get the output as 0 or it's not a fruit. We know that it is a fruit and whenever the predcited and 
actual values are different we run the correction part 

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

We now use the **Perceptron Learning Rule** to correct our mistake 

`∆w = learning rate X (teacher provided class – predicted class) X node input
`

Here we use a 
1.` learning rate` = 0.25
2. `teacher provided class – predicted class` of 1
3. `node input` = 1 ( for the first node, 1 for the second and 0 for the third )

Plugging this in we get a value for `∆w = 0.25 X 1 X 1 = 0.25`

∆w tells us how much we should change the respective nodes of the perceptron. In our case we will change the first node weight to 0.25 using the above result.
Similarly, all the weights are changed for the respective input. And finally it would look something like this

![image](https://user-images.githubusercontent.com/42119760/63163037-e4783080-c041-11e9-8f68-626d0a71d06e.png)

We do the above as many times as want, the general rule is the more we train the better out model will get. 

**After training for 10 train fruits the weights are 0.5, 0.25 and 0.25**

3. #### Testing Phase
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

<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Your Name - [Anandha Krishnan H](anandhakrishnanh1998@gmail.com) - anandhakrishnanh1998@gmail.com

Project Link: [https://github.com/anandhakrishnanh/Fruit-Classifier-Perceptron](https://github.com/anandhakrishnanh/Fruit-Classifier-Perceptron)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/anandhakrishnanh/Fruit-Classifier-Perceptron.svg?style=for-the-badge
[contributors-url]: https://github.com/anandhakrishnanh/Fruit-Classifier-Perceptron/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/anandhakrishnanh/Fruit-Classifier-Perceptron.svg?style=for-the-badge
[forks-url]: https://github.com/anandhakrishnanh/Fruit-Classifier-Perceptron/network/members
[stars-shield]: https://img.shields.io/github/stars/anandhakrishnanh/Fruit-Classifier-Perceptron.svg?style=for-the-badge
[stars-url]: https://github.com/anandhakrishnanh/Fruit-Classifier-Perceptron/stargazers
[issues-shield]: https://img.shields.io/github/issues/anandhakrishnanh/Fruit-Classifier-Perceptron.svg?style=for-the-badge
[issues-url]: https://github.com/anandhakrishnanh/Fruit-Classifier-Perceptron/issues
[license-shield]: https://img.shields.io/github/license/anandhakrishnanh/Fruit-Classifier-Perceptron.svg?style=for-the-badge
[license-url]: https://github.com/anandhakrishnanh/Fruit-Classifier-Perceptron/blob/master/LICENSE.txt
