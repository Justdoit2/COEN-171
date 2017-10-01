def QuicksortWithoutRecurse(a):
  stack=[a]
  result=[]
  while stack:
    
    temp=stack.pop()
    
    if len(temp)==1:
      result.append(temp[0])
      continue # skips bottom
    
    left_stack=[]
    right_stack=[]
    pivot=temp[0]
    for i in range(1,len(temp)):
      if temp[i]<pivot:
        left_stack.append(temp[i])
      else:
        right_stack.append(temp[i])
    left_stack.append(pivot)
    
    if right_stack: # not empty
      stack.append(right_stack)
    if left_stack:
      stack.append(left_stack)
    
      
  return result # space mistake for result
    
print(QuicksortWithoutRecurse(a)) #prints in sorted order
