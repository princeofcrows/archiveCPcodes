function save_life=donate_blood(birthday, today)
%birthday=date of 18th birthday
%today=another date( it does not necessarily mean today cannot be past or future :P ).
%Both of the date is a matrix in the format [Date Month Year]. 
%You have to return the number of life he has saved in save_life variable.
  md = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
  d1 = birthday(1);
  m1 = birthday(2);
  y1 = birthday(3);
  d2 = today(1);
  m2 = today(2);
  y2 = today(3);
  
  ty = y1;
  if m1<=2
    ty = ty-1;
  end
  l1 = floor(ty/4) - floor(ty/100) + floor(ty/400);
  ty = y2;
  if m2<=2
    ty = ty-1;
  end
  l2 = floor(ty/4) - floor(ty/100) + floor(ty/400);
  n1 = y1*365+d1;
  i = 1;
  while (i<m1)
    n1 = n1+ md(i);
    i = i+1;
  end
  n1 = n1 + l1;
  i = 1;
  n2 = y2*365+d2;
  while (i<m2)
    n2 = n2+md(i);
    i = i+1;
  end
  n2 = n2 + l2;
  an = n2-n1;
  save_life = floor(an/120)+1;
end








