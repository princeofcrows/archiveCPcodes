function [ output ] = pakhi( B , X , Y , N , Birds  )

% Complete the pakhi() function. It takes 5 inputs 
% B -> The amount of damage the bullet can take , 
% X - > x coordinate of Mr. Motlob , 
% Y -> y coordinate of Mr. Motlob , 
% N number of birds and 
% a Matrix Birds of size (N*3) -> 
% x position , y position and damage ith bird can inflict.
for i=1:2010
    for j=1:2010
        arr(i, j) = 0;
    end
end
MAXS = 2007;
X = X + 1001;
Y = Y + 1001;
output = 0;

for i=1:N
    pos_x = Birds(i, 1);
    pos_y = Birds(i, 2);
    val = Birds(i, 3);
    pos_x = pos_x + 1001;
    pos_y = pos_y + 1001;
    arr(pos_x, pos_y) = val;
end
pr = B;
sum = 0;
for i=X:1:MAXS
    if(pr >= arr(i, Y))
        if(arr(i, Y) ~= 0)
            sum = sum + 1;
            pr = pr - arr(i, Y);
        end
    else break;
    end
end
if(sum > output) output = sum;
end
    
pr = B;
sum = 0;
for i=X:-1:1
    if(pr >= arr(i, Y))
        if(arr(i, Y) ~= 0)
            sum = sum + 1;
            pr = pr - arr(i, Y);
        end
    else break;
    end
end
if(sum > output) output = sum;
end

pr = B;
sum = 0;
for i=Y:1:MAXS
    if(pr >= arr(X, i))
        if(arr(X, i) ~= 0)
            sum = sum + 1;
            pr = pr - arr(X, i);
        end
    else break;
    end
end
if(sum > output) output = sum;
end

pr = B;
sum = 0;
for i=Y:-1:1
    if(pr >= arr(X, i))
        if(arr(X, i) ~= 0)
            sum = sum + 1;
            pr = pr - arr(X, i);
        end
    else break;
    end
end
if(sum > output) output = sum;
end

pr = B;
sum = 0;
for i = 0:1:MAXS
    t_x = X+i;
    t_y = Y+i;
    if(t_x >= MAXS || t_y >= MAXS || t_x <= 0 || t_y <= 0) break;
    end
    if(pr >= arr(t_x, t_y))
        if(arr(t_x, t_y) ~= 0)
            sum = sum + 1;
            pr = pr - arr(t_x, t_y);
        end
    else break;
    end
end
if(sum > output) output = sum;
end

pr = B;
sum = 0;
for i = 0:1:MAXS
    t_x = X-i;
    t_y = Y-i;
    if(t_x >= MAXS || t_y >= MAXS || t_x <= 0 || t_y <= 0) break;
    end
    if(pr >= arr(t_x, t_y))
        if(arr(t_x, t_y) ~= 0)
            sum = sum + 1;
            pr = pr - arr(t_x, t_y);
        end
    else break;
    end
end
if(sum > output) output = sum;
end

    pr = B;
sum = 0;
for i = 0:1:MAXS
    t_x = X+i;
    t_y = Y-i;
    if(t_x >= MAXS || t_y >= MAXS || t_x <= 0 || t_y <= 0) break;
    end
    if(pr >= arr(t_x, t_y))
        if(arr(t_x, t_y) ~= 0)
            sum = sum + 1;
            pr = pr - arr(t_x, t_y);
        end
    else break;
    end
end
if(sum > output) output = sum;
end

pr = B;
sum = 0;
for i = 0:1:MAXS
    t_x = X-i;
    t_y = Y+i;
    if(t_x >= MAXS || t_y >= MAXS || t_x <= 0 || t_y <= 0) break;
    end
    if(pr >= arr(t_x, t_y))
        if(arr(t_x, t_y) ~= 0)
            sum = sum + 1;
            pr = pr - arr(t_x, t_y);
        end
    else break;
    end
end
if(sum > output) output = sum;
end

end

