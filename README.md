# Max Non-Overlapping-Bridges

PROBLEM STATEMENT:

  Consider a two-dimensional map with a horizontal river running across it. On the southern bank, there are n cities with x-coordinates a(1)... a(n), while on the northern bank,     there are n cities with x-coordinates b(1)... b. (n). You aim to connect as many north-south cities as possible with bridges, with no two crossing each other. You can only         connect city a(i) on the northern bank to city b(i) on the southern bank when connecting cities.

EXAMPLE:

  INPUT:(6,2), (4,3), (2,6), (1,5)

  OUTPUT:Maximum possible non-overlapping bridges=2

APPROACH:

  ->Sort the south co-ordinates  in ascending order.

  ->For north co-ordinates, find the longest increasing subsequence.

  ->Join the bridges in the order of the longest increasing subsequences.
