#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 945821707
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p[5], unsigned char p_4, long long p_6,
                   unsigned long long p_8[4], unsigned long long p_10)
{
  unsigned long v_17;
  unsigned short v_15;
  double v_13;
  long long v;
  unsigned short result;
  v_17 = (unsigned long)p_6;
  v_15 = (unsigned short)p_10;
  v_13 = (double)p_10;
  if (18446744073709518674ULL != ~ ((unsigned long long)((unsigned long)8948426617.95 | v_17) / (
                                    p_8[0] * (unsigned long long)p_4 + 764ULL))) {
    v = (long long)(- ((p_8[1] + (unsigned long long)p_4) % (unsigned long long)(
                       - p_6 + 350LL)));
    v_13 = (double)(11979519U / (unsigned int)(((p[2] >> ((int)p_4 & 31)) - (
                                                p[3] ^ 499743892)) + 668));
    result = (unsigned short)(- (64ULL * p_10) % 735ULL);
  }
  else {
    v = (long long)(! v_15);
    v_15 = (unsigned short)((unsigned long long)(~ v * 44LL) * 53272ULL);
    result = (unsigned short)p[2];
  }
  if (p_10 * (unsigned long long)((int)(- v_15)) > - (((unsigned long long)p[2] / (
                                                       p_8[3] + 220ULL)) / (unsigned long long)(
                                                      4294947732U % (unsigned int)(
                                                      (int)result + 471) + 328U))) 
    result = (unsigned short)(-212893184.f / (((float)p[1] * -1.63360885483e+38f - (float)p_4) + 398.f));
  else {
    result = (unsigned short)((double)v + - (v_13 / 39244.));
    result = (unsigned short)(~ ((p_8[0] + 18446744073709551490ULL) % (unsigned long long)(
                                 (int)(~ result) + 538)));
    result = (unsigned short)(((unsigned long long)p_6 * 13556ULL) % (
                              p_8[0] / (p_10 + 688ULL) + 87ULL) & (unsigned long long)(~ (
                              (int)result % (p[1] + 807))));
  }
  return result;
}


