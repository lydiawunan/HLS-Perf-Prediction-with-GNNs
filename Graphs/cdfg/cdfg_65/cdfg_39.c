#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239015774
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[3][1][4], int p_9, float p_11,
           long long p_19, char p_21)
{
  long long v_23;
  float v_17;
  signed char v_15;
  double v_13;
  long v_7;
  int v_5;
  unsigned char v;
  double result;
  v_23 = (long long)p_9;
  v_17 = -8646692864.f;
  v_15 = (signed char)-34;
  v_7 = 40261L;
  v_5 = p_9;
  v = (unsigned char)202;
  result = (double)p_21;
  if (p_19 * (long long)v < (long long)(! ((int)p_21 + (int)((char)v_17))) % (
                            (long long)v_7 % (~ v_23 + 459LL) + 314LL)) {
    v_13 = (double)(-122 & (int)(~ v_15));
    v_5 = (int)((- result / (double)(p_11 + 969.f)) / (v_13 + 601.));
    result = (double)(- (! v_7 + (long)p_9));
  }
  else {
    v_17 = (float)(4294958796U * (unsigned int)(- (269864403 / ((int)p_21 + 603))));
    v = (unsigned char)(((float)(p_19 / (long long)((int)p_21 + 64)) + - p_11) * (
                        -1.465979303e+38f / ((float)(! p_19) + 995.f)));
    result = (double)((int)(- v_17) / (- (p_9 - -72) + 736));
  }
  while ((unsigned long long)result == p[2][0][1]) {
    v = (int)v + (int)((unsigned char)3960623959.54);
    result = (double)(~ (- v_5));
    v_5 = (int)(~ (p[0][0][1] + (unsigned long long)result) % ((unsigned long long)result + 949ULL));
    result = (double)(! ((unsigned long long)(-758715653LL + (long long)v_5) * (
                         176303999ULL | p[0][0][2])));
  }
  while_0_break: ;
  return result;
}


