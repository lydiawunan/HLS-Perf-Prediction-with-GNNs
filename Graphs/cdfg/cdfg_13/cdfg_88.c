#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 729065262
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[4], char p_5, long p_7,
                       unsigned short p_9, unsigned int p_13[3][5])
{
  unsigned int v_21;
  unsigned int v_19;
  unsigned long long v_17;
  float v_15;
  long v_11;
  unsigned short v;
  unsigned long long result;
  v_21 = 3500899218U;
  v_19 = p_13[2][0];
  v_15 = 855.948669434f;
  result = (unsigned long long)p[2];
  if (- ((unsigned long)((long)p[1] * p_7) * (unsigned long)p_13[0][3]) <= (unsigned long)(
      (long)(((float)v_21 * -212.28793335f) * (float)p_9) + -625524877L)) 
    v = (unsigned short)p_5;
  else {
    v_17 = ~ ((result ^ 18446744073241895428ULL) + (unsigned long long)v_19);
    v_11 = (long)(((unsigned long long)(p_13[1][3] * (unsigned int)v_15) % (
                   - v_17 + 50ULL)) * 702469391ULL);
    v = (unsigned short)((p_7 % 496659301L) % (! ((long)p_9 ^ v_11) + 444L));
  }
  result = (unsigned long long)(4189822070UL | (unsigned long)(~ ((int)p[2] % (
                                                                  (int)v + 176))));
  return result;
}


