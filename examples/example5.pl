:-dynamic other_thing/3.

:-volitile get_out/4.

g -->
  ( car ->
    true
  ; otherwise ->
    false
  ).

f(t, Log, M, frog(c, L, [], [G, T])):-
  G =.. [cat, Dog, Frog],
  G = cat(Dog, Frog),
  'Logs',
  "Cat".

%
/*
cat
*/
