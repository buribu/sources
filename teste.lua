function vib(n,m) 
     droid.vibrate(n) 
     sleep(m) 
end 
a = 10 
while ( 1 ) do 
   while ( a > 0 ) do 
      a = a - 1 
      vib( 600,800 ) 
   end 
   while ( a < 10 ) do 
      a = a + 2 
      vib( 200,1000 ) 
   end 
end 
    