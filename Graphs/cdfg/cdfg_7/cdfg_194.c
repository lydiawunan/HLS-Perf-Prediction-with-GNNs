#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 963860894
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, long long p_5, unsigned char p_7, double p_13,
                  unsigned int p_15)
{
  float v_21;
  unsigned long long v_19;
  long long v_17;
  short v_11;
  char v_9;
  short v;
  unsigned long result;
  v_19 = 999045450ULL;
  v_17 = p_5;
  v_11 = (short)p_7;
  v_9 = (char)p;
  v = (short)20310;
  result = 2186UL;
  while ((double)((long long)(! (-24436 * (int)v_9)) * ((p_5 % 112LL) % 42LL)) < 
         (((double)p_5 * 319.018591042) * (double)(-7573819L / (long)(
                                                   (int)v_9 + 558))) * (double)(
         (442.561096191f - (float)p_15) + (float)(p - v_17))) {
    v_17 = (long long)(result % 1057UL);
    v_21 = (float)(603142794ULL * ((unsigned long long)((int)v_11 % (
                                                        (int)((short)p_13) + 9)) - 18446744072969628816ULL));
    v_9 = (char)(((v_19 - 45ULL) - v_19 * (unsigned long long)v_17) * (
                 (unsigned long long)((int)p_7 + (int)((unsigned char)-764.47727774)) % (
                 (34459ULL & (unsigned long long)v_21) + 139ULL)));
  }
  while_0_break: ;
  while (- (p ^ 0LL) >= (long long)((int)(! v) >> (7245LL * p & 15LL)) * (
                        (-18925LL - p_5) * (long long)p_7)) {
    v_11 = (int)v_11 * ((int)v_9 + -676455765);
    result = (unsigned long)((int)(~ p_7) << (! p & 7LL));
    v_9 = (char)((unsigned int)((int)p_7 * (int)((unsigned char)p_13)) * (
                 (unsigned int)p_7 - (p_15 >> (v_17 & 31LL))));
    v = (short)((unsigned long)(p_13 / ((double)p_15 + 468.)) % ((result + 4294943178UL) + 613UL) - (unsigned long)p_15);
  }
  while_0_break_0: ;
  return result;
}


