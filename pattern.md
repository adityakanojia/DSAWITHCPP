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

# A B C 

# D E F

# G H I

in this pattern we define a variable before starting of our outer loop after that we define our outer loop where it loop through till N times and console endline at the end just so our loop go through 

then we will define our inner loop which will perform task/ logic which we need to render our line where we just print that variable and at the ende we just increase it by 1 PS : same goes for character patterns

pseudo code :- 

num = 1;

for (i = 0; i < number; i++ ){

    for (j = 0; j < number; j++){
        
        cout << num;    
        
        num++;
    
    }
        
    cout << endl;

};