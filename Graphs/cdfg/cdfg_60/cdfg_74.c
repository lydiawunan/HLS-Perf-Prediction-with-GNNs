#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641719346
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, unsigned long p_7[1][5],
                       unsigned long long p_15[5], signed char p_25)
{
  short v_23;
  double v_21;
  long long v_19;
  unsigned int v_17;
  signed char v_13;
  float v_11;
  unsigned int v_9;
  unsigned char v_5;
  short v;
  unsigned long long result;
  v_23 = (short)p;
  v_21 = (double)p_15[2];
  v_19 = 32903LL;
  v_17 = (unsigned int)p;
  v_11 = (float)p_25;
  v_9 = (unsigned int)p_7[0][3];
  v_5 = (unsigned char)12;
  v = (short)p_25;
  result = 953387745ULL;
  if (- (4.55243906274e+37f + (float)p_25) < p + ((float)v_23 / -440.672119141f) / (
                                                 (float)v_9 * v_11 + 521.f)) {
    v_17 = (unsigned int)(! 61591UL);
    v_23 = (short)v_21;
    v_9 = (unsigned int)((float)(125UL * p_7[0][3] >> ((int)v_5 / ((int)((unsigned char)v_21) + 275) & 31)) - 
                         (float)((int)v % ((int)v_23 + 568)) / (p / (
                                                                (float)p_15[1] + 568.f) + 519.f));
  }
  else {
    v_5 = (unsigned char)((unsigned long long)((unsigned long)(4249447069U % (
                                                               v_9 + 913U)) * - p_7[0][0]) + result);
    result = (unsigned long long)((int)v % 798);
    v_19 = (long long)(~ (~ p_7[0][3] | (unsigned long)((int)p_25 % (
                                                        (int)((signed char)p) + 933))));
  }
  if ((unsigned long long)(~ (~ ((int)((signed char)-274.352233887f) >> 6))) > 
      (unsigned long long)(- v_17 + 536U) + p_15[3]) {
    v = (short)(- (~ p_7[0][0] ^ (unsigned long)v_9));
    v = (short)(- ((p - (float)v_5) - (float)v));
    result = (unsigned long long)(- v);
  }
  else {
    v_11 = (float)((long long)(~ v_17) - v_19);
    v_13 = (signed char)-38;
    result = ! result * (unsigned long long)((int)((signed char)v_11) + (int)v_13) - 
             p_15[3] * (unsigned long long)((double)p + 5430742632.55);
  }
  return result;
}


