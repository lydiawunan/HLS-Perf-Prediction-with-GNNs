#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 211240756
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, int p_7, short p_13[2][4])
{
  unsigned long long v_11;
  double v_9;
  signed char v_5;
  unsigned char v;
  unsigned char result;
  v_11 = 649291294ULL;
  v_9 = (double)p_13[0][1];
  v_5 = (signed char)-55;
  v = (unsigned char)p_7;
  v = (unsigned char)(! (~ ((int)p_13[1][1] & (int)v) << 21L));
  v_11 = - v_11;
  v = (unsigned char)((unsigned long long)((int)((p + (double)v) / ((double)(
                                                                    (int)((signed char)-1.55880525901e+38) % (
                                                                    (int)v_5 + 606)) + 282.)) & 
                                           (p_7 * 668) % ((int)(v_9 / -66.) + 88)) - v_11);
  result = v;
  return result;
}


