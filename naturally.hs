--Joshua Realubit
--netID - jrealu3
--factorial program written "naturally"

factorial :: Integer -> Integer

factorial n = if n > 1
              then n * factorial (n - 1)
              else 1              
