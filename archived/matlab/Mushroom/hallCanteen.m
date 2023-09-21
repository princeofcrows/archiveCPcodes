function [ output ] = hallCanteen( n , m , p , h )

% Complete the function template hallCanteen(). 
% Which takes 4 inputs n - the number of dishes  ,  
% m � Mr. Motlob's budget  , 
% a vector p of size n  indicating the price 
% of the i th dish and 
% another vector h of size n indicating the amount 
% of happiness of the i th dish.
  dp  = zeros(n+5, m+5);
  for i=1:n+1
    for w=0:m
      if i==1||w==0
        dp(i, w+1) = 0;
      elseif p(i-1)<=w
        dp(i,w+1) = max(h(i-1) +dp(i-1, w+1-p(i-1)),dp(i-1, w+1));
       else
        dp(i, w+1) = dp(i-1, w+1);
      end
    end
  end
  output = dp(n+1, m+1);
end

