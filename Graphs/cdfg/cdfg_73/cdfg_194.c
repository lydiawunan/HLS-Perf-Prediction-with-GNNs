#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 218330114
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p[1][4], long long p_5[2], long p_9,
                   unsigned char p_19)
{
  unsigned int v_21;
  signed char v_17;
  int v_15;
  unsigned short v_13;
  unsigned long v_11;
  double v_7;
  long v;
  unsigned short result;
  v_21 = (unsigned int)p_19;
  v_17 = (signed char)p_5[0];
  v_15 = 686457032;
  v_13 = (unsigned short)p_5[0];
  v_11 = (unsigned long)p_9;
  result = (unsigned short)p_9;
  while (~ (~ (p_5[1] * (long long)p[0][1])) == (long long)v_11) {
    v_13 = (int)v_17 % (v_15 / 33386 + 809);
    v_15 = (int)(! (! (v_21 * 4294909776U)));
    v_17 = (signed char)p_19;
    v_11 = 2126280176UL;
  }
  while_0_break: ;
  if ((unsigned long)p_9 / (v_11 + 602UL) < (unsigned long)v_13) result = (unsigned short)(
                                                                 0 / (unsigned int)(
                                                                 ((-34 - (int)((char)-1.89533119765e+38)) - (int)p[0][3]) + 512));
  else {
    v_7 = (double)result;
    v = (long)(0 % ((unsigned long long)(- v_7) + 544ULL));
    result = (unsigned short)(~ ((long long)v / 177597405LL - - p_5[1]));
  }
  return result;
}


