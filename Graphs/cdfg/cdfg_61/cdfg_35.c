#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 507121696
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, short p_5, long long p_7,
              unsigned char p_11[3], long long p_13[4][5][4])
{
  long long v_23;
  long v_21;
  short v_19;
  long v_17;
  unsigned char v_15;
  unsigned long long v_9;
  unsigned int v;
  long long result;
  v_23 = (long long)p_11[2];
  v_21 = -323707062L;
  v_17 = 59564L;
  result = -1099LL;
  if (result >= -78LL % ((long long)v_21 % ((long long)p_5 % (v_23 + 275LL) + 612LL) + 208LL)) {
    v_15 = (unsigned char)(((p_13[1][0][3] + 600154597LL) % (~ result + 338LL)) * (long long)(- v_17));
    v = (unsigned int)(4093UL * (unsigned long)v_15);
    v_9 = (unsigned long long)p_11[2];
  }
  else {
    v_19 = (short)(~ (! -141));
    v_9 = (unsigned long long)(((long long)(- p_5) ^ (-45473LL - p_13[0][3][0])) | (long long)(- (
                               (int)v_19 * 112)));
    v = (unsigned int)(((24595ULL / (p + 565ULL)) / (unsigned long long)(
                        p_7 + 314LL)) / ((unsigned long long)-411.915405273f + 919ULL));
  }
  if (- (v_9 - (unsigned long long)p_11[1]) != (unsigned long long)((
                                                                    p_13[1][4][0] << (
                                                                    p_13[2][2][0] & 63LL)) * p_13[3][3][3] + 3596537081LL)) {
    v = (unsigned int)(- ((6ULL + p) / (unsigned long long)(! v + 206U)));
    v = (unsigned int)((16418ULL * p + p) + (unsigned long long)v);
    result = (long long)v;
  }
  else result = -6739LL * ((long long)(~ p_5) * (232LL + p_7));
  return result;
}


