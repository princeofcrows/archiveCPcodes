function [ output ] = testScore( n , m , p , answers )

% Complete the function template testScore(). 
%Which takes 4 inputs n - the number of students , 
% m � the number of questions  , 
% a vector p of size n-2 , indicating the probabilty 
% that the (i+1) th student will tell the correct 
% answer [ here nth student is Mr. Motlob and 1st 
% student is his friend ] , 
% next another vector of length m gives 
% us the actual answers ( 0 for false and 1 for true )
  output = 1;
  for i=1:n-2
    output = output*p(i);
  end
   output = m*output;
end

