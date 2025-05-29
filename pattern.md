# Pattern Programming

## Rendering N numbers till N times

eg :- printing

1234

1234

1234

1234

this is called square pattern where outer loop will run till N times and inner loop runs through N times then we will create endl in the outer loop when inner loop will end.

## Rendering Square but in increasing order

example :- 

## A B C 

## D E F

## G H I

in this pattern we define a variable before starting of our outer loop after that we define our outer loop where it loop through till N times and console endline at the end just so our loop go through 

then we will define our inner loop which will perform task/ logic which we need to render our line where we just print that variable and at the ende we just increase it by 1 PS : same goes for character patterns

pseudo code :- 

int num = 1;

for (i = 0; i < number; i++ )

{

    for (j = 0; j < number; j++){
        
        cout << num;    
        
        num++;
    
    }
        
    cout << endl;

};


# Backward looping 

## Example

## 1

## 2 1

## 3 2 1

## 4 3 2 1

As we can see from the above example outer loop will run **4 times** as there are 4 line and inner loop will run till puter loop for example if we have **outer loop index = 1 then inner loop will run once when outer loop index is 3 inner loop will run thrice**.
lets take a look at pseudo code.

`for(int i=0 ; i < N ; i++){`
    `for(int j= i+1; j > 0; j--)`
    {
        cout << j << " ";
    }

    cout << endl;
`}`

**As above code explains the moment when i turn 1 inner loop will console 1 then j = 1-1 loop will break then i will turn 2 then loop will run twice ie :- j = 2 ==> console 2 ==> j = 2 - 1 == 1 which is greater then 0 ==> console 1 ==> j = 1 - 1 == 0 which is not greater than 0 ==> inner loop will break the i = i + 1 and it continues .**