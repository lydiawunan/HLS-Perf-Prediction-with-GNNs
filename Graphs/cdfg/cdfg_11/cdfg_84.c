#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 356537946
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, char p_5, unsigned char p_9, short p_13[1],
         unsigned long p_19)
{
  unsigned short v_23;
  unsigned char v_21;
  int v_17;
  short v_15;
  unsigned long v_11;
  long v_7;
  float v;
  long result;
  v_23 = (unsigned short)21366;
  v_21 = (unsigned char)p;
  v_17 = -19413487;
  v_15 = p_13[0];
  v_7 = -33566L;
  v = -629.351379395f;
  result = 1021233927L;
  if ((float)(~ (3644327437U + (unsigned int)(- v_17))) < (float)v_7 + -3.14564940863e+38f) {
    v_11 = (unsigned long)(~ (((int)p_13[0] | (int)v_21) / ((int)v_23 * 193 + 128)));
    v_7 = (long)(1022179955UL / (((p_19 << ((unsigned long)p & 31UL)) ^ (unsigned long)(
                                  (double)v / (p + 673.))) + 436UL));
    v_15 = (short)p;
  }
  else {
    v_11 = (unsigned long)(~ p_9);
    v_7 = (long)p_5 | (50415L - result);
    v_17 = (int)((p_19 + (unsigned long)((int)v_21 >> ((int)((unsigned char)p) & 7))) + (unsigned long)(- p_5));
  }
  if ((unsigned long)(~ ((int)((float)p_5 / 1839.27832031f) % (v_17 + 374))) == v_11) 
    result = (long)p;
  else {
    v_11 = (unsigned long)((float)((unsigned long)-1.91478207076e+38 - (
                                   v_11 ^ (unsigned long)v_15)) - - v);
    v = (float)(((unsigned long)((long)p_5 % (v_7 + 369L)) - ((unsigned long)p_9 & v_11)) / (unsigned long)(
                (int)(! (! p_13[0])) + 569));
    result = (long)v;
  }
  return result;
}


