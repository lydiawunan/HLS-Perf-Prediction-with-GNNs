#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 70954790
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned long p_7[4][2], signed char p_9,
          int p_11, unsigned short p_13)
{
  double v_21;
  short v_19;
  unsigned long long v_17;
  short v_15;
  unsigned short v_5;
  unsigned long v;
  short result;
  v_19 = (short)-5398;
  v_17 = (unsigned long long)p_9;
  v_15 = (short)p_9;
  v_5 = (unsigned short)p_7[0][1];
  v = p_7[3][1];
  result = (short)p;
  while ((unsigned long long)(! ((unsigned int)((int)p_13 - (int)v_5))) == 
         (unsigned long long)(-110 + (220 | (int)v_15)) * ((v_17 + (unsigned long long)p_11) - 18446744073709502186ULL)) {
    v_21 = (double)v_19 / 3372969808.98;
    v = (unsigned long)(~ (~ v_17));
    result = (short)v_21;
    v_15 = (short)(- (3814398049U + (unsigned int)(! result)));
  }
  while_0_break: ;
  while (18446744073709487849ULL != (unsigned long long)((60UL - v % (unsigned long)(
                                                                 (int)p + 978)) - 29385UL)) {
    result = (int)v_5 - (int)((unsigned short)-1094739712.f);
    v = (unsigned long)(((int)(! p) & (int)result) << (! p_11 & 31));
    v_5 = (unsigned short)p_9;
    v = p_7[1][0] - (unsigned long)v_5 * v;
  }
  while_0_break_0: ;
  return result;
}


