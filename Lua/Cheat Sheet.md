
                               Lua Cheat Sheet



 Invoking functions                          Conditions
 -----------------------------------------   ----------------------------------
 |                                       |   |                                |
 |  You can omit parentheses if the      |   |  if condition then             |
 |  argument is one string or table      |   |    print("yes")                |
 |  literal.                             |   |  elseif condition then         |
 |                                       |   |    print("maybe")              |
 |  print("Hello World")                 |   |  else                          |
 |  print "Hello World"                  |   |    print("no")                 |
 |                                       |   |  end                           |
 |                                       |   |                                |
 ----------------------------------------    ----------------------------------

 Table / Array                               Loops
 -----------------------------------------   ----------------------------------
 |                                       |   |                                |
 |  t = {}                               |   |  while condition do            |
 |  t = { a = 1, b = 2 }                 |   |  end                           |
 |  t.a = function() ... end             |   |                                |
 |                                       |   |  for i = 1,5 do                |
 |  t = { ![pic]("hello") = 200 }        |   |  end                           |
 |  t.hello                              |   |                                |
 |                                       |   |  for i = start,finish,delta do |
 |  -- Remember, arrays are also tables  |   |  end                           |
 |  array = { "a", "b", "c"}             |   |                                |
 |  print(array![pic](1)) -- "a"         |   |  for k,v in pairs(tab) do      |
 |  print(#array)   -- 3 (length)        |   |  end                           |
 |                                       |   |                                |
 -----------------------------------------   |  repeat                        |
                                             |  until condition               |
                                             |                                |
                                             |  -- breaking out:              |
                                             |  while x do                    |
                                             |    if condition then break end |
                                             |  end                           |
                                             |                                |
                                             ----------------------------------

