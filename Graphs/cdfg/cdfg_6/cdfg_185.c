#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 99936683
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, long long p_11[1], unsigned short p_13,
                 unsigned long long p_15, short p_21)
{
  short v_27;
  unsigned long long v_25;
  float v_23;
  long long v_19;
  unsigned long v_17;
  char v_9;
  unsigned short v_7;
  unsigned long v_4;
  unsigned long v;
  unsigned int result;
  v_27 = (short)p_15;
  v_25 = 29865ULL;
  v_23 = (float)p;
  v_19 = -170225462LL;
  v_17 = 3824513631UL;
  v_9 = (char)-91;
  v_7 = (unsigned short)44571;
  v = 9404UL;
  result = (unsigned int)p_13;
  if ((unsigned long long)(-9351LL + (long long)result) / (unsigned long long)(
      (p / 145 + (int)(! v_7)) + 229) >= 195ULL) {
    result = (unsigned int)((unsigned long)(- p) * v_17);
    v_7 = (unsigned short)((unsigned long)v_7 - 118UL / (~ v_17 + 759UL));
    v_7 = (unsigned short)((unsigned int)(~ (~ v_7)) + result);
  }
  else {
    v_9 = (char)(((float)v_19 + 2.3070423543e+38f) / ((float)((p_15 - 13483ULL) - (unsigned long long)v_27) + 951.f));
    v_7 = (unsigned short)((unsigned long long)((v_19 | (long long)v) % (long long)(
                                                (int)p_21 + 660)) & (
                                                                    (unsigned long long)v_23 / (
                                                                    p_15 + 145ULL)) * v_25);
    result = (unsigned int)(- (- (! p_11[0])));
  }
  if ((unsigned int)v_9 > result) {
    v_4 = (unsigned long)((long)(p + (int)(- v_7)) - 0L % (long)((int)(- v_9) + 162));
    v = ! (v_4 * 48859UL);
    result = (unsigned int)(! (! (- v)));
  }
  else result = (unsigned int)((unsigned long long)(! (-87LL % (p_11[0] + 802LL))) + (
                               (unsigned long long)(- p_13) + ! p_15));
  return result;
}


