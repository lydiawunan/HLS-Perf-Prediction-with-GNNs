#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 313067750
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, signed char p_7, long long p_9[3][3], double p_11,
                  long p_15)
{
  float v_13;
  char v_4;
  unsigned long v;
  unsigned char result;
  v_13 = (float)p;
  v = (unsigned long)p_7;
  result = (unsigned char)p_15;
  v_4 = (char)((double)((int)((unsigned char)(-778.731140137f + (float)v)) * (int)(! result)) * 608.20135082);
  if ((23729LL + (p_9[2][0] ^ (long long)p_11)) * p_9[2][0] != (long long)(
      (long)((int)v_4 - (int)((char)v_13)) * ((p_15 * 111L) * -61188L))) {
    v_4 = (char)result;
    v = (unsigned long)(- p / ((int)(- p_7) + 327));
    result = (unsigned char)(! (v % 4178077353UL >> (4258464623UL % (unsigned long)(
                                                     (int)v_4 + 302) & 31UL)));
  }
  else result = (unsigned char)(! (~ (-(short)10888)));
  return result;
}


