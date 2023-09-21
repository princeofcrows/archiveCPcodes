function [ output ] = dsp( n,x,y )
% n -> length of sequence
% x -> max number of 0 in a row
% y -> max number of 1 in a row
  dp0(1) = 1;
  dp1(1) = 1;
  ans(1) = 1;
  n = n + 1;
  for i=2:1:n
    dp0(i) = ans(i-1);
    dp1(i) = ans(i-1);
    if i>x+1
      dp0(i) = dp0(i)-dp1(i-x-1);
      dp0(i) = mod(dp0(i), 1000000007);
      if(dp0(i)<0)
        dp0(i) = dp0(i)+1000000007;
      end
    end
    if i>y+1
      dp1(i) = dp1(i)-dp0(i-y-1);
      dp1(i) = mod(dp1(i), 1000000007);
      if(dp1(i)<0)
        dp1(i) = dp1(i)+1000000007;
      end
    end
    ans(i) = dp0(i)+dp1(i);
    ans(i) = mod(ans(i), 1000000007);
  end
  output = ans(n);
end

