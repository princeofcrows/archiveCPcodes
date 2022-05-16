function [ output ] = buetWifi( n , m , Dist , a , b )

% Complete the buetWifi() function that takes 5 inputs 
% n number of possible safe places , 
% m number of phones Mr. Motlob bought , 
% Dist the vector representing the distance of 
% ith safe spot from buet ,
% a and b the two constants mentioned above.

% Output the best quality internet he may get 
% at his home.
  Dsort = sort(Dist);
  l = Dsort(n);
  temp = a^m; 
  output = temp * exp(-b*l);
end
