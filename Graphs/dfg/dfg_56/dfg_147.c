#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 275619809
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned int p_5, signed char p_9[5][5],
                long long p_17)
{
  long v_15;
  short v_13;
  long v_11;
  unsigned short v_7;
  unsigned char v;
  signed char result;
  v_15 = 737480308L;
  v_11 = -46337L;
  v_7 = (unsigned short)p_9[2][3];
  v_13 = (short)(52130UL & p);
  result = (signed char)((long long)(((unsigned long)p_9[1][3] + 3421091082UL) * (unsigned long)(- v_7)) % (
                         ((long long)v_11 / 22141394LL) / (long long)(
                         (int)(- v_13) + 810) + 408LL) - -582587720LL % (
                                                         ((long long)(- v_15) - 
                                                          p_17 % 2559LL) + 717LL));
  v = (unsigned char)((long long)p + (long long)(! ((unsigned int)result * p_5)) / (
                                     ((long long)(! v_7) + ((long long)p_9[2][2] ^ 55858LL)) + 849LL));
  result = (signed char)(- (- v));
  return result;
}


