#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 911661753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[4][3], unsigned long p_7, unsigned short p_9,
         long long p_11)
{
  long v_13;
  unsigned char v_5;
  unsigned long v;
  char result;
  v_13 = (long)p_7;
  if (18446744073709547265ULL == ~ (18446744073709499448ULL | (unsigned long long)(
                                    v_13 / ((long)-5635738112.f + 163L)))) {
    v = (unsigned long)p_9;
    v_5 = (unsigned char)(((-32671LL & (long long)v) / 71191LL) / (long long)(
                          p_7 + 223UL));
  }
  else v_5 = (unsigned char)p_11;
  if (4294911872U < (638613599U & (unsigned int)((int)p[1][1] * 232)) * (unsigned int)(- v_5)) 
    result = (char)75;
  else {
    v = (unsigned long)((int)p[3][1]);
    result = (char)v;
  }
  return result;
}


