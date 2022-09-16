# Loops and Data Structures - Practical Exercises

## In the matrix

Here is an example of a 3 by 4 matrix:
`matrix = [[0, 9, 5, 3], [2, 1, 4, 7], [3, 2, 1, 6]]`

- Write a Python program that sums all values in the matrix stored in variable `matrix`. Assign the result to a variable named `total`
- Calculate the average value. How about the average of each row?
- What is the smallest value stored in the matrix?

## Length of words

Write a Python program that calculates the length of each string in a list of strings. It should produce a new list where the first element is the length of the first string, the second element is the length of the second string, and so on.

For example, for the following list: `str_list = ['Hello', 'Betty', 'Holberton', '!']` it should produce `str_len = [5, 5, 9, 1]`

Create a list named `word_len` whose elements are the lengths of the words in `words`. The first element should be the length of the first word; the second element is the length of the second word, and so on.

`words = ['tissue', 'psychology', 'blind', 'assessment', 'dynamic', 'hero', 'circulation', 'merchant', 'publication', 'interference', 'show', 'joy', 'sour', 'aloof', 'grass', 'distortion', 'exclude', 'pressure', 'bullet', 'calf']`

## Multiply by five

In this problem you'll create a function, `mult_five`, that given an order list of integers (without repetitions) ranging and including all numbers from `0` to `n` (for some positive integer n) returns a list consisting of the multiples of `5`. Here's a usage example:

`print(mult_five([0, 1, 2, 3, 4, 5, 6, 7, 8, 9]))`

would yield

`[0, 5]`

## Concatenate lists

In this problem you'll create a function, `concatenate`, that given two lists, it concatenates them in the same order into a new list. Here's a usage example:

```Python
beginning_of_quote = ['Aus', 'dem', 'Paradies,', 'das', 'Cantor', 'uns', 'geschaffen,']
rest_of_quote = ['soll', 'uns', 'niemand', 'vertreiben', 'können.']
print(concatenate(beginning_of_quote, rest_of_quote))

# results
['Aus', 'dem', 'Paradies,', 'das', 'Cantor', 'uns', 'geschaffen,', 'soll', 'uns', 'niemand', 'vertreiben', 'können.']
```

Create a function, concatenate, that given two lists as input, returns a new list that extends the first argument by the second one.

## Count them all

In this problem you'll create a function, `count`, that given a list and an object, counts how many times the object appears in the list. Here are a couple of usage examples:

```Python
print(count([2, 2, 2, 1, 2, 1, 0, 0, 0, 2], 99))
print(count([2, 2, 2, 1, 2, 1, 0, 0, 0, 2], 1))
```

Create a function, `count`, with the following features:
- Takes in a list as its first argument.
- The second argument is a potential element of the first.	
- Counts how many times the second argument occurs in the first and returns the value.

## Find first

Create a function, `find_first`, that given a list and an object

- Returns index of the first occurrence of the object in the list, if it's in it.
- Otherwise returns `-1`

You have to use `try - except`

## Insert an element

Create a function, `insert`, with the following features:
- Takes a list as its first argument.
- Takes any object as its second argument.
- The third argument is the non-negative index in which the given object will be located in the result.
- Pushes the element that was previously located on the given index, and the following elements, one position to the right.
- Returns a new list.


## Keys to list

Write a Python program that creates a list containing all keys in a given dictionary.

For example, if the dictionary is:

```Python
people = {"Katherine Freeman": "katherine.freeman@hoffman.net","Tammy Gonzalez": "tammy.gonzalez@gomez.info","Robin Matthews": "robin.matthews@leblanc-lyons.org","Sherry Farrell": "sherry.farrell@reynolds-johnson.net","Emma Graves": "emma.graves@reid-little.info","Tina Brown": "tina.brown@yahoo.com","George Owens": "george.owens@yahoo.com","Ronald Ball": "ronald.ball@thomas.com"}
```

Create a list named `keys` that contains all keys in the `people` dictionary.

## Lists to dictionaries

Given two lists of the same length, one containing keys and the other containing values, write a Python program that creates a dictionary where the keys are the ones in the key list, and the values are the ones in the value list.

For exameple if the keys are

```Python
keys = ['a', 'c', 'b']
value = [5, 1, 7]
```

Then the result should be:

```Python
d = {
    'a': 5,
    'c': 1,
    'b': 7
}
```

Two lists are provided named `keys` and `values`. Write a program that combines them into a dictionary name `my_dict`. The key `keys[i]` should have value `values[i]` for every index `i`.
The keys does not have duplicates and both lists have the same length.

```Python
keys = ['Katherine Freeman', 'Tammy Gonzalez', 'Robin Matthews', 'Sherry Farrell', 'Emma Graves', 'Tina Brown', 'George Owens', 'Ronald Ball']

values = ['katherine.freeman@hoffman.net', 'tammy.gonzalez@gomez.info', 'robin.matthews@leblanc-lyons.org', 'sherry.farrell@reynolds-johnson.net', 'emma.graves@reid-little.info', 'tina.brown@yahoo.com', 'george.owens@yahoo.com', 'ronald.ball@thomas.com']
```

## Our kids biggest challenge is to find a username that is not already taken

In this practice problem, we are going to practice loading a CSV file into a dictionary.

The file `users.csv` contains a randomly generated list of users together with their usernames and email addresses. 

The goal is to load the CSV file into a dictionary with the names as keys and the emails as values so that we can quickly look up the email address of a user given its name.

**Instructions**
- Use the `csv` module to read the `users.csv` file. Remember to ignore the header row (first row).
- Build a dictionary named `name_to_email` with user names as keys and email addresses as values.
- Look up the email addresses of users `Mr Jordan Castro` and `Ms Emilia Vega` by looking up the dictionary created in the previous step.
- Assign the email addresses to variables `jordan_email` and `emilia_email`.

## The right words to express oneself can never be found in any dictionary

In the previous practice problem, we have converted a CSV file containing user information into a dictionary so that we can easily look up an email address from the name of a given user.

In this problem, we are going to reverse that dictionary so that we can look up the name of a user from that user's email address. The idea is to use only the dictionary that we created in the previous screen, not to read the CSV file again.

**Instructions**

The dictionary `name_to_email` from the previous task is still available.

- Create a dictionary named `email_to_name` with the values of `name_to_email` as keys and having those map to the original keys. In other words, if `name_to_email[x] = y` then `email_to_name[y] = x`.

- By looking up the dictionary created in the previous step, lookup the name of the user with email address `jordan.castro@example.com`.

- Assign that user name to a variable named `name`.

- Print the value of variable `name`.

## Laughter is brightest where food is best

The dataset for this problem is in the CSV file `restaurants.csv`. This CSV contains locations of more than 1000 restaurants. It has the following columns: `Restaurant name, Restaurant ID, Cuisine, Opens, Closes, Days Open, Price, Rating, Location, Description`.

- Use the `csv` module to read the `restaurants.csv` file.

- Build a frequency table for counting the cuisines categories 

- Assign the name of the cuisine with the most restaurants to a variable named `most_restaurants`. If there are several answers, any will be marked as correct.