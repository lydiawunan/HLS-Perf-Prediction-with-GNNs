//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 294577127
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, long p_11, unsigned long long p_15, unsigned short p_17)
{
  long long v_13;
  float v_9;
  unsigned char v_7;
  unsigned short v_4;
  unsigned long long v;
  int result;
  v_13 = (long long)p;
  v_7 = (unsigned char)p;
  v_4 = (unsigned short)62030;
  v = (unsigned long long)p;
  v_7 = (unsigned char)((18446744072993012083ULL / ((18446744073709514215ULL & (unsigned long long)v_7) + 351ULL)) % (unsigned long long)(
                        (long long)p_17 % (~ v_13 + 638LL) + 988LL));
  v_9 = (float)v;
  result = (int)((~ (- v) << ((unsigned long long)((v_9 + 47.f) / (- v_9 + 249.f)) & 63ULL)) * (
                 (unsigned long long)(-272.35080948 - (double)p_11) + 
                 ((unsigned long long)v_13 % (p_15 + 821ULL)) % 133036792ULL));
  result = (int)(((unsigned long long)(~ (- result)) * (! v * (unsigned long long)(
                                                        5234822656.f + (float)v_4))) / (unsigned long long)(
                 ~ ((int)p % ((int)(~ v_7) + 800)) + 123));
  return result;
}


