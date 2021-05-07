/*
    
    9! = 362880
    Because 3*9! > 1 000 000, we already know that the first number must
    be 2. 
    0-1-(2)
    2

    Then we have 274240 permutations to go. As 
    8! = 40320,
    there will be total of 6 full revolutions and the second number is 0-
    1-3-4-5-6-(7). The second number is 7 instead of 6, since 2 is already in
    use. 32320 permutations to go.
    27

    7! = 5040
    Again, there will be total of 6 full revolutions, such that 32320 - 6*7! = 2080.
    0-1-3-4-5-6-(8).
    278

    6! = 720
    2080 - 2*6! = 640.
    0-1-(3)
    2783

    5! = 120
    640 - 5*5! = 40.
    0-1-4-5-6-(9)
    27839

    4! = 24
    40 - 1*4! = 16.
    0-(1)
    278391

    3! = 6
    16 - 2*3! = 4.
    0-4-(5)
    2783915 (046)
            (064)
            (406)
            (460)  <-----

*/