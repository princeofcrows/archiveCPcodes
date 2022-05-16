x = 0:.01:1;
for i=1:length(x)
  y(i) = 2*exp(-x(i))+2*sin(x(i))+3*cos(x(i))+5*tan(x(i))+12*x(i)*x(i)+1;
end 
plot(x, y)
