#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 107294455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned long long p_5[5],
                int p_7[5][2][2], long p_11, unsigned short p_13)
{
  unsigned long v_15;
  int v_9;
  float v;
  signed char result;
  result = (signed char)p_13;
  v_15 = (unsigned long)(~ (unsigned char)142);
  if ((unsigned long)p_13 < ~ (~ v_15 % 4294967231UL)) {
    v = (float)738283201541242ULL;
    v = (float)(! (! result)) + - v;
    result = (signed char)((-6784085094.91 - (double)v) / ((double)((unsigned long long)(
                                                                    915940177U - (unsigned int)p) * (
                                                                    (unsigned long long)p + p_5[2])) + 202.));
  }
  else {
    result = (signed char)(~ (- p_5[1] + 93025500ULL));
    v_9 = (int)(30270ULL % (unsigned long long)((p_7[4][0][0] % ((int)result + 262)) % (
                                                p_7[0][1][1] + 589) + 291));
    result = (signed char)((long)(- p_7[3][0][0] + - v_9) % (p_11 + 808L));
  }
  return result;
}


