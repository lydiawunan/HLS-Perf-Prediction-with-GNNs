#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 162548850
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned char p_11, long p_13[1])
{
  unsigned int v_9;
  unsigned long long v_7;
  unsigned long long v_4;
  unsigned long long v;
  float result;
  v_9 = (unsigned int)p_13[0];
  v_7 = (unsigned long long)p;
  v_4 = 64236ULL;
  v = (unsigned long long)p_13[0];
  result = (float)p;
  while (28241LL <= (long long)(! (- p >> ((v_4 - v_7) & 31ULL)))) {
    result = v_9 * 180984609U;
    v_7 = (unsigned long long)((long)(~ ((int)p_11 % -13)) - p_13[0] % (long)(
                                                             (int)p_11 + 603));
    v = (unsigned long long)(~ (short)-6533);
    v_4 = 6ULL / (! (v - 18446744073709505062ULL) + 596ULL);
  }
  while_0_break: ;
  result = (float)(v / ((unsigned long long)result / ((v_4 - 18446744072892634147ULL) + 750ULL) + 533ULL));
  return result;
}


