import random
import subprocess
import argparse
import pprint as pp

def main(args):
    bb_numbers=int(args['bb_num'])
    a=int(args['a'])
    b=int(args['b'])
    i=0

    while i<bb_numbers: 
        name='bb_'+str(i)+'.c'
        file1 = open(name, 'w') 
        file1.writelines(['#include <stdio.h>\n','\n'])
        file1.close()
      
        num=random.randint(a, b)
        oneline='frama-c -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5'
        # frama-c -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth
        # frama-c -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
        #cmd=oneline+str(num)+' >> '+name

        cmd=oneline+' >> '+name
        ret = subprocess.run(cmd,shell=True)


        # remove those programs with pointers or too short
        file1 = open(name, 'r')
        flag_pointer=0
        flag_fn1=0

        lines=file1.readlines()
        for j in range(lines.__len__()):
            if lines[j].__contains__("fn1"):
                flag_fn1=1
            if flag_fn1==1 and lines[j].__contains__("*"):
                flag_pointer=1
                break
            if lines[j].__contains__("{"):
                break
        
        if flag_pointer==0 and lines.__len__()>16:
            i=i+1


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='provide arguments for basic block generator')

    parser.add_argument('--bb-num', help='the number of basic blocks to generate', default=100)
    parser.add_argument('--a', help='min expr depth in ldrgen', default=5)
    parser.add_argument('--b', help='max expr depth in ldrgen', default=16)


    args = vars(parser.parse_args())
    pp.pprint(args)
    main(args)
