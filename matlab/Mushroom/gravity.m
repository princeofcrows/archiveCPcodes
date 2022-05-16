function [ output ] = gravity( N , Height )

% Complete the gravity() function that takes 2 input. 
% N -> number of heights , 
% Height -> A vector of size N denoting the heights at different places.

  HS = sort(Height);
  HS = fliplr(HS);
  output = 1;
  for i=1:N
    if HS(i)~=Height(i)
      output = 0;
      break;
    end
  end
end

