function [ x ] = penPineapple( n , m , A , b  )
    g_1 = n;
    g_2 = m;
    B = b;
    B = B';
    i = 1; 
    X = [ A B ]; 
    [ nX mX ] = size( X);   
    while i <= nX 
        if X(i,i) == 0 
            return
        end
        X = elimination(X,i,i); 
        i = i +1;
    end    
    %x = X(:,mX);
    k = 1;
    for i=m:m:(n*m)
        x(k) = X(i, mX);
        k = k+1;
    end

   
 
function X = elimination(X,i,j)

 
[ nX mX ] = size( X); 
a = X(i,j);
X(i,:) = X(i,:)/a;
for k =  1:nX 
    if k == i;
        continue
    end
    X(k,:) = X(k,:) - X(i,:)*X(k,j); 
end
