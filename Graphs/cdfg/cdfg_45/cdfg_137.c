#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796013825
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, long long p_5, unsigned int p_7, float p_13[2][2],
        unsigned long long p_15)
{
  float v_23;
  long v_21;
  signed char v_19;
  float v_17;
  int v_11;
  float v_9;
  signed char v;
  int result;
  v_23 = (float)p_7;
  v_21 = 52707L;
  v_19 = (signed char)70;
  v_17 = -1351341440.f;
  v_11 = (int)p_7;
  v_9 = -221.002929688f;
  v = (signed char)p_7;
  result = -38478;
  while ((long long)(! ((unsigned long)v_11 % 21803UL)) + ((long long)(
                                                           (int)v_19 >> 1) - (
                                                           (long long)v_17 - p_5)) > 32570LL) {
    v = (long)v_23 + -34476L;
    result = (int)((long long)((int)v - (int)p) / ((p_5 | (long long)p_7) + 715LL) + (long long)p);
    v_23 = - p_13[0][1] / ((float)((unsigned long long)(7714L + v_21) - 
                                   p_15 % 18446744073565843025ULL) + 626.f);
    v_17 = v_23;
  }
  while_0_break: ;
  while ((long long)(- (6406L * (long)(- v))) == ((long long)p & p_5) / (long long)(
                                                 (p_7 - (unsigned int)p) + 668U) - -3858LL) {
    result = (int)(! (p_15 % ((unsigned long long)v_17 + 804ULL)) / (unsigned long long)(
                   (int)v_19 + 158));
    v_11 = (int)((float)(! (result - (int)-3326318080.f)) + (- p_13[0][1] - 
                                                             (float)p_7 / (
                                                             v_9 + 798.f)));
    v = (signed char)(! v_11 + (int)((unsigned short)(- v_9)) * 30973);
  }
  while_0_break_0: ;
  return result;
}


