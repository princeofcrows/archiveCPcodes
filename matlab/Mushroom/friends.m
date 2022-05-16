function [ output ] = friends( A , B , C  )

% complete friends() function which takes 3 inputs . 
% A -> ratio of your payment , 
% B -> ratio of Fred�s payment , 
% C -> The total money Mr. Motlob will return.

% Output the correct amount of money you should receive.
  output = (3*C*A)/(A+B)-C;
end

