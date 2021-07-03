# LoveLetter
Love letter is an encryption method.
why is it name love letter?

well... heres the story, i was talking with my mother and she explained to me this encryption method she used when sending love letters to my dad, and now i want to see if i can replicate it 
and make it exist outside of my mothers love letters...


# How it works
Love letter requires a keyword and it assigns a number value to letter
its just better if you look at an example
  ## example
  lets use the keyword `CaveMan`
  now lets label the keyword with numbers:
  ```
  c = 1
  a = 2
  v = 3
  e = 4
  M = 5
  a = 2
  n = 6
  ```
  now that we have labeled the keyword with numbers we can encrypt other words.
  Now we are going to encrpyt the word `Camera`, this results in `1-2-5-4-18-2`
  you can notice that R doesnt have a number value, what we do is that we use the missing letter's number index in the alphabet. (R is the 18th letter in the alphabet) and assing it a value.
  
