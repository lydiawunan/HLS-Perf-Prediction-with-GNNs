#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 653409794
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, long long p_4, unsigned char p_7, long p_9,
                   int p_11)
{
  unsigned char v_21;
  unsigned long v_19;
  char v_17;
  unsigned short v_15;
  float v_13;
  unsigned long long v;
  unsigned short result;
  v_21 = (unsigned char)72;
  v_19 = 1005337454UL;
  v_15 = (unsigned short)20718;
  v_13 = (float)p_9;
  v = 4522ULL;
  if ((-949780915LL % (long long)(p_9 + 756L) - (long long)(p / (p + 104.))) - (long long)(- (
      (int)v_21 * (int)p_7)) != (long long)(- ((-4020494245.71 + p) + (double)(- v_13)))) {
    v_17 = (char)((362373005ULL * v) * (unsigned long long)p_11 | 64ULL);
    v_13 = (float)(! (((unsigned long)p_11 * 4294938645UL) / (59338UL / (
                                                              v_19 + 984UL) + 68UL)));
    v_15 = (unsigned short)(((long long)(~ v_17) & p_4) * (long long)v_17);
  }
  else {
    result = (unsigned short)p_9;
    v = (unsigned long long)(~ ((long long)((long)p_11 / 46719L) % (p_4 % (long long)(
                                                                    (int)result + 884) + 392LL)));
    v_13 = (float)p_4;
  }
  result = (unsigned short)(((unsigned long long)((long long)p ^ p_4) + (
                             v | (unsigned long long)p_7)) - (unsigned long long)(
                            p_9 * (long)p_11 - (long)((int)((unsigned short)v_13) + (int)v_15)));
  return result;
}


