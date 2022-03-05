/*
This expamle is for 3 shelves, which is indexing 0, 1, 2
r[2]: 1 books: book1(35 pages)
r[1]: 3 books: book1(63 pages), book2(21 pages), book2(32 pages)
r[0]: 2 books: book1(12 pages), book2(52 pages)

You can see the layout, So here we have to reallocate memory for pages as per required number of books.
   __              ___
  |  |            |   |
2 |1 |          2 |35 |
  |--|            |---|---|---|
1 |3 |          1 |63 |21 |32 |
  |--|            |---|---|---|
0 |2 |          0 |12 |52 |
  |  |            |   |   |
  ````            ``` ````
books           Pages

If we get new query: 1(add), 1, 57
Now we have to add one more book with 57 pages.
So this time: books[1]++ ie. books[1] will be 4,
and reallocate memory to pages for 4 integers and add 57 at index 3 ie. pages[3] = 57.
*/
