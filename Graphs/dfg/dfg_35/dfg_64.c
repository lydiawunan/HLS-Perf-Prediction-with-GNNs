#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 488160254
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned long long p_9[1], short p_13)
{
  unsigned long long v_15;
  short v_11;
  double v_6;
  long v_4;
  double v;
  signed char result;
  v_15 = p_9[0];
  v_6 = 934.806409721;
  v = -506.110471461;
  v_11 = (short)v_15;
  v_4 = (long)((! ((unsigned long long)v_11 + v_15) - ~ (v_15 | 3893ULL)) - 12378ULL);
  v = (double)((unsigned long long)((v * (double)(v_4 + (long)p)) / (
                                    (double)((721459952ULL % (p_9[0] + 360ULL)) / 666503133ULL) + 528.)) & 
               (260ULL - (unsigned long long)((int)v_11 % 103)) / ((- p_9[0] ^ (unsigned long long)(
                                                                    v / (
                                                                    (double)p_13 + 457.))) + 277ULL));
  result = (signed char)((-3077176576. + v) * ((double)v_4 - - (- v_6)));
  return result;
}


