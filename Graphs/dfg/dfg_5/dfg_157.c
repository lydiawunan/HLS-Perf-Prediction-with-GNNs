//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410496288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long p_4[2][4][5], unsigned char p_7,
                unsigned int p_9)
{
  int v_13;
  unsigned int v_11;
  unsigned long v;
  signed char result;
  result = (signed char)25;
  v_13 = (int)288.082654189;
  v_11 = 4294967266U;
  v = (unsigned long)(~ (~ v_11) - (unsigned int)(~ v_13));
  result = (signed char)((unsigned long)p + ((unsigned long)((long)result / (
                                                             p_4[1][2][0] + 386L)) % (
                                             (v - (unsigned long)p_7) + 44UL)) / (unsigned long)(
                                            p_9 + 473U));
  return result;
}


