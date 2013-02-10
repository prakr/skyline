import sys


def main():
  transform_input()
  

def transform_input():
  output=[0]* 10000
  #print len(output)
  output[3]=10
  #print output[3]
  initial_x=0
  final_x=0
  

  while True:
    fl = raw_input('')
    if fl == '':
      break
    prop = fl.split(' ')
    startx = int(prop[0])
    height = int(prop[1])
    endx = int(prop[2])
    #print prop
    if initial_x == 0 :
      initial_x = startx
    for i in range(startx,endx):
      if output[i] < height:
        output[i] = height
    if endx>final_x:
      final_x = endx

  for i in range(initial_x,final_x+1):  
    if output[i] != output[i-1]:
      #if i != initial_x :
      #  print ' ' , 
      print str(i) + ' ' + str(output[i]),
  print '\n'

if __name__ == '__main__':
  main() 
