#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 957960308
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, float p_13)
{
  signed char v_10;
  unsigned long v_8;
  long v_6;
  long v_4;
  long v;
  float result;
  v_10 = (signed char)-116;
  v_8 = 41266UL;
  v_6 = (long)p_13;
  v_4 = 58925L;
  v = (long)p;
  result = p_13;
  if ((float)p > - p_13 + (float)((long long)v_4 + 1724844000LL)) {
    v_4 = (long)p;
    v = -5408L;
    v = (long)(- v_8 % (unsigned long)(v + 258L));
  }
  else {
    v_4 = ! (v ^ (long)p) / ((! v_6 & 626192100L) + 584L);
    v_10 = v_10;
    v_8 = (unsigned long)p;
  }
  while ((unsigned long)v + 39698UL < (4123279093UL * (unsigned long)(! v_4)) * (unsigned long)(~ (- v_6))) {
    result = (unsigned long)v_10 ^ v_8 * (unsigned long)-1487095765.97;
    v_8 = (unsigned long)(~ 400575515LL);
    v_10 = (signed char)(510962428L + (long)p);
    v = ~ (- (115L / (v_6 + 573L)));
  }
  while_0_break: ;
  return result;
}


