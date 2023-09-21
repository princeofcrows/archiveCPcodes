function [ output ] = labReport( N , Numbers , M , Input )

% Complete the labReport() function that takes 4 inputs
% N length of the set of all possible input values , 
% Numbers the vector of all possible input values , 
% M length of the continuous input number , 
% Input the input number itself represented as 
% digit after digit in a vector.
  ns = 0;
  nsd = 0;
  nd = 0;
  for i=1:N
    ns = ns + Numbers(i);
    temp = Numbers(i);
    while(temp ~= 0)
      nsd = nsd + mod(temp, 10);
      temp = floor(temp/10);
    end
  end
  for i=1:M
    nd = nd + Input(i);
  end
  output = ns + nd - nsd;
end

