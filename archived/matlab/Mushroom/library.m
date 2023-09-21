function [ output ] = library( N , d )
% Complete the function library() that takes 2 inputs
% N -> the number of database entries of the month.
% A vector d -> contains N positive integers 
% di (1< i <N)  the database entries (i.e. book id) .
  mapObj = containers.Map('KeyType','int64','ValueType','int32');
  for i=1:N
    if isKey(mapObj, d(i)) == false
      newMap = containers.Map(d(i),1);
      mapObj = [mapObj; newMap];
     else
      remove(mapObj,d(i));
    end
  end
  sz = size(mapObj,1);
  if sz==0
    output = 0;
  else
      output = keys(mapObj);
  end
end

