#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 698488994
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, double p_4, unsigned long p_11[5])
{
  signed char v_13;
  short v_9;
  long v_7;
  short v;
  unsigned int result;
  v_13 = (signed char)p;
  v_9 = (short)p_4;
  v_7 = (long)p_11[1];
  v = (short)25663;
  result = 402759542U;
  v_7 = v_7;
  if (3672282952UL != - ((unsigned long)v_13 - p_11[0]) * (unsigned long)v) {
    v = (short)((unsigned int)-189098371.221 - (3662839568U - result));
    result = (unsigned int)(! ((unsigned long)(result + 4125726386U) % (unsigned long)(
                               ! v_7 + 468L)));
    result = (unsigned int)((int)((short)((double)p + p_4)) % ((int)(- v) + 159)) * (
             ~ result % ((258U & result) + 89U));
  }
  else result = (unsigned int)(~ (4294943321UL / (p_11[0] + 450UL)) / 4097332365UL);
  return result;
}


