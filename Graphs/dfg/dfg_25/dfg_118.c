#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669091140
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned short p_7, unsigned long long p_9,
         unsigned int p_11[1][1], char p_19)
{
  unsigned short v_17;
  float v_15;
  char v_13;
  unsigned int v_4;
  long long v;
  long result;
  v_17 = (unsigned short)p_19;
  v_13 = (char)53;
  v_4 = p_11[0][0];
  v = (long long)p_19;
  v_15 = (float)((long long)p_11[0][0] % (~ ((long long)((int)v_13 * 94) / (
                                             (v + (long long)p_19) + 68LL)) + 949LL));
  v = (long long)((unsigned long long)v_15 ^ (p_9 * (unsigned long long)v_17 & (unsigned long long)(
                                              51338 - (int)p_19)) % (unsigned long long)(
                                             ((unsigned long)((int)((unsigned short)8353851496.73) * 33861) ^ 
                                              3347906778UL % (unsigned long)(
                                              v_4 + 298U)) + 195UL));
  v_4 = (unsigned int)((unsigned long long)p_7 % ((56ULL + p_9 * (unsigned long long)p_11[0][0]) % (unsigned long long)(
                                                  (int)(- (! v_13)) + 58) + 545ULL));
  result = (long)(((v - -9578357760LL) % (long long)(~ v_4 + 596U)) / (
                  p + 709LL));
  return result;
}


