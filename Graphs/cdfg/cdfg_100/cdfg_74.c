#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526826581
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, float p_9, unsigned char p_13,
                  unsigned short p_19)
{
  signed char v_17;
  unsigned char v_15;
  double v_11;
  signed char v_7;
  unsigned short v_4;
  long long v;
  unsigned char result;
  v_17 = (signed char)8;
  v_15 = (unsigned char)p;
  v_11 = 5.63350893881e+36;
  v_7 = (signed char)p;
  v = -1037393029LL;
  result = (unsigned char)p_9;
  v_4 = (unsigned short)v;
  while ((double)(v + (long long)(((unsigned int)v_4 + p) * (unsigned int)(
                                  (int)v_7 + (int)((signed char)p_9)))) > 
         v_11 / ((double)((189187037UL - (unsigned long)p_13) * (unsigned long)v_15) + 219.)) {
    v = (unsigned long)v_17 / 30370UL;
    v_15 = (unsigned char)((long)(105367201.741 * (double)p_9 - (double)(
                                  (int)v_7 + (int)p_19)) * 16629625L);
    v_11 = (double)((((unsigned int)p_9 - p) ^ (unsigned int)(103 - (int)p_13)) - 
                    p * ! p);
    v_4 = (unsigned short)((double)(! (! v_15)) + (3.25918947005e+38 - 
                                                   952.133581523 * (double)result));
  }
  while_0_break: ;
  return result;
}


