#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 896189980
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, int p_7[3], short p_9, double p_11,
          signed char p_17)
{
  long long v_29;
  unsigned short v_27;
  long long v_25;
  char v_23;
  unsigned long v_21;
  long long v_19;
  float v_15;
  float v_13;
  unsigned long v_5;
  char v;
  short result;
  v_29 = 40496LL;
  v_27 = (unsigned short)1237;
  v_25 = (long long)p_7[1];
  v_21 = 4294902205UL;
  v_15 = -1286908032.f;
  if (((unsigned long long)v_27 - ! p) - (unsigned long long)v_29 < (unsigned long long)(
      ((long long)p_9 + v_25) - ~ v_29)) {
    v_19 = (long long)(! (~ v_21) - (unsigned long)((unsigned int)(- p_7[1]) / (
                                                    4294939989U % ((unsigned int)v_15 + 956U) + 164U)));
    v_15 = (float)(~ ((long long)(- v_15) % (v_19 + 811LL)));
    v_13 = (float)(~ (- (- p)));
  }
  else {
    v_23 = (char)(((int)((signed char)p_11) - (int)(- p_17)) / ((int)(
                                                                p_11 / (
                                                                (double)(
                                                                (long long)p_17 - v_25) + 553.)) + 154));
    v_15 = (float)(char)110;
    v_13 = (float)(83 * (((int)((short)p_11) + (int)p_9) / ((int)(~ v_23) + 177)));
  }
  if (v_13 > (float)(~ (((int)((signed char)v_15) - (int)p_17) ^ (p_7[0] + p_7[0])))) {
    v_5 = (unsigned long)(! (614442894LL + (long long)(- p_7[2])));
    v = (char)(- (! (p ^ (unsigned long long)v_5)));
    result = (short)v;
  }
  else result = (short)(! (32922ULL - (unsigned long long)((double)p_9 - p_11)));
  return result;
}


