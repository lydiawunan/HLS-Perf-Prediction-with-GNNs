#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 814176050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[2][1], char p_5, long p_11, unsigned long p_13,
         unsigned char p_19)
{
  long v_21;
  int v_17;
  int v_15;
  long v_9;
  unsigned short v_7;
  long long v;
  long result;
  v_21 = -983121522L;
  v_17 = -214113877;
  v_9 = -56744L;
  v_15 = (int)((long)(((double)p_13 / 3.34778168248e+38) / ((double)(
                                                            p_11 * p_11) + 96.)) % (
               2L % (p_11 + 857L) + 796L));
  if ((long)((int)(- p_5) + -31201) - v_21 < ! p_11 / ((long)p[1][0] + 848L)) 
    result = (long)p[1][0];
  else {
    v_7 = (unsigned short)((int)((float)(- v_15) * 332.494506836f) % (
                           - v_17 + 89));
    v = (long long)((unsigned long)((long)((int)p_5 ^ (int)v_7) * (-18690L / (
                                                                   v_9 + 507L))) + ! (
                    (unsigned long)p_11 + p_13));
    result = (long)(((v << 4) - 23266LL) * 70LL);
  }
  return result;
}


