function [ output ] = noName( input )

% You have to complete the function noName() 
% that takes only one input in and return the 
% corresponding output , as Mr. Motlob would generate 
% from his code.
  output = 0;
  while(input~=0)
    output = output+mod(input, 2);
    input = floor(input/2);
  end
end

