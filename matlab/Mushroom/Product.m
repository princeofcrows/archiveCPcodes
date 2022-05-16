function [ output ] = Product ( n , m , array , query )
% Complete the function template Product (). 
% Which takes 4 inputs 
% n - the number of elements in the array  ,  
% m ï¿½ number of queries  , 
% a vector array of size n  indicating the 
% i th element of array and 
% a matrix query of size (m,2) denoting the 
% (l,r) values of each query.

% Return a vector containing the first digit 
% of product of each segments.
  
  dpf(1) = sym('1');
  dpb(1) = sym('1');
  for i=1:n
    dpf(i+1) = dpf(i)*sym(array(i));
    dpb(i+1) = 1;
  end
  dpb(n+1) = sym('1');
  for i=n:-1:1
    dpb(i) = dpb(i+1)*sym(array(i));
  end
  tot = sym(dpf(n+1));
  for i=1:m
    op(i) = vpa(tot/(dpf(query(i, 1))*dpb(query(i, 2)+1)));
    while(op(i)>=10)
        op(i) = (op(i)/10);
    end
  end
  for i=1:m
    output(i) = op(i);
    for j=10:-1:1
        if output(i)>j
            output(i) = j;
            break;
        elseif output(i)==j
            output(i) = j;
            break;
        end
    end
    if(output(i)==10)
        output(i) = 1;
    end
  end
end

