#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 953994079
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned char p_15[1])
{
  short v_19;
  signed char v_17;
  unsigned short v_12;
  unsigned int v_10;
  short v_8;
  char v_6;
  int v_4;
  signed char v;
  long result;
  v_19 = (short)-11153;
  v_17 = (signed char)p_15[0];
  v_12 = (unsigned short)p_15[0];
  v_10 = 19804U;
  v_8 = (short)29063;
  v_6 = (char)48;
  v_4 = (int)p;
  v = (signed char)-67;
  result = (long)p_15[0];
  while ((float)(! ((int)p_15[0] % ((int)p_15[0] + 335) + (int)(- p))) == 
         1.14719326818e+38f - (float)v) {
    v_12 = (int)v_19 / ((int)v_17 / 8490 + 190);
    result = (long)((unsigned long)((long)(5528 ^ (int)p_15[0]) * (result % (
                                                                   result + 868L))) + (unsigned long)v_10);
    v_10 = (unsigned int)((int)(- p) + ! (44 % ((int)v_8 + 1017)));
    v = (signed char)((int)(- p_15[0]) << (v_10 & 7U));
  }
  while_0_break: ;
  while ((int)v >= (~ v_4 / ((int)v_6 + 648)) % ((-88 + (int)(~ v_8)) + 987)) {
    v_10 = (unsigned int)v_12 - v_10 / 14U;
    v_8 = (short)(- (- (3982823526. - p)));
    v_6 = (char)(p + (double)(49035 & ((int)p_15[0] ^ (int)v_8)));
    v_8 = (short)((int)-6435760994.65 + ((int)v_6 / (v_4 + 689) - (int)(- p)));
  }
  while_0_break_0: ;
  return result;
}


