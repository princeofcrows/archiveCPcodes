function [ output ] = hacchoo( N , Class )

% Complete the function hacchoo()  it takes 2 inputs 
% N-> Number of students , 
% Class -> a vector of size N which shows the 
% initial condition if the ith  student is infected 
% then the ith vector entry is 1 otherwise it 0.
%Compute the time when the class will dismiss.
  z = 0;
  output = 0;
  i = 1;
  while (Class(i)==0)
    output = output + 1;
    i = i + 1;
    if i==N+1
      break;
    end
  end
  i = N;
  temp = 0;
  while (Class(i)==0)
    temp = temp + 1;
    i = i - 1;
    if i==0
      break;
    end
  end
  output = max(output, temp);
  for i=1:N
    if Class(i)==1
      output = max(output, ceil(z/2));
      z = 0;
     else
      z = z + 1;
    end
  end
end

