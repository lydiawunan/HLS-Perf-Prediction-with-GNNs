#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 102356540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, long p_4, unsigned short p_7, double p_9,
                long long p_11)
{
  unsigned int v_25;
  unsigned int v_23;
  signed char v_21;
  double v_19;
  long long v_17;
  unsigned int v_15;
  signed char v_13;
  float v;
  signed char result;
  v_25 = (unsigned int)p_7;
  v_23 = 19629U;
  v_21 = (signed char)p;
  v_17 = 924167956LL;
  v_15 = 4294948657U;
  v = 7.12397326678e+37f;
  if ((unsigned long)(~ ((unsigned int)(p_9 - 1.84467440731e+19) >> (
                         ! v_25 & 31U))) == 4294913034UL) {
    v_13 = (signed char)(! (- p_11));
    v_15 = (unsigned int)(~ ((unsigned long long)p_7 - (unsigned long long)p_7 / 18446744073709522316ULL));
    v = (float)((unsigned long long)(- (227210953L + p_4)) + - ((unsigned long long)v_15 - 19781ULL));
  }
  else {
    v_13 = (signed char)((unsigned long)(~ p_4) / (unsigned long)(v_23 + 562U) + 
                         (unsigned long)((unsigned int)-6943760374.15 % (
                                         v_25 + 120U)) % (unsigned long)(
                         p_4 + 1L));
    v_19 = (double)((long long)(! ((unsigned int)v_21 / 57606U)) * (0LL / (
                                                                    v_17 + 183LL)));
    v = (float)((p_9 * (double)v + (double)((long long)v_15 - v_17)) - - (- v_19));
  }
  if ((long long)(0UL / (unsigned long)(((long)p_7 - p_4) * (long)((int)((char)-2.63029589408e+38f) / (
                                                                   (int)p + 476)) + 131L)) >= 
      (long long)((int)((signed char)v) >> ((int)v_13 & 7)) / (p_11 / 20LL + 93LL) - (long long)(
      -403.450012207f - (float)((unsigned long)p_4 | 4294943181UL))) 
    result = (signed char)(! ((int)p / 314));
  else {
    v = (float)-12147LL;
    result = (signed char)(- (v + 4294965760.f));
    result = (signed char)(- p_4 - (long)(- (! result)));
  }
  return result;
}


