#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 384400092
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long long p_5[3], unsigned char p_13,
                float p_15, unsigned char p_17)
{
  signed char v_27;
  signed char v_25;
  long long v_23;
  float v_21;
  long v_19;
  long long v_11;
  float v_9;
  signed char v_7;
  unsigned long long v;
  signed char result;
  v_27 = (signed char)p_15;
  v_25 = (signed char)p_5[0];
  v_23 = p_5[2];
  v_21 = -2029585664.f;
  v_19 = 2842163L;
  v_11 = 613860308LL;
  v_9 = (float)p_17;
  v_7 = (signed char)-100;
  v = (unsigned long long)p_17;
  result = (signed char)0;
  while ((long long)(16710 - (int)p_17) / (v_11 % (long long)(v_19 + 341L) + 667LL) - (long long)(
         (int)((unsigned char)(v_21 - (float)v_23)) - (int)p_13) != (long long)(- (
         ((unsigned int)-836.460205078f / (p + 599U)) / 81U))) {
    v = (float)v_27 * ((float)v_25 - -606.531494141f);
    result = (signed char)(- (v_23 % (v_23 * 32230LL + 570LL)));
    v_11 = (long long)(- 6899324190.87);
    v_19 = (long)v_23;
  }
  while_0_break: ;
  while (v >= (unsigned long long)(~ ((long long)p / (p_5[2] + 727LL)) * (long long)(
                                   4294965544U / (! p + 283U)))) {
    v_11 = v_9 / ((float)((int)v_7 - -94) + 517.f);
    v_7 = (signed char)(((double)(p_15 + (float)p_17) * 4.06314306996e+37) * (double)(
                        (64478L + v_19) - 44L));
    v_9 = (float)(- (v_11 / 601930236LL));
    v = (unsigned long long)(! ((long long)p_13 % (~ p_5[2] + 753LL)));
  }
  while_0_break_0: ;
  return result;
}


