#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 676150061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p[3][1], char p_5, unsigned int p_7, short p_11,
                unsigned short p_13)
{
  signed char v_27;
  float v_25;
  unsigned int v_23;
  short v_21;
  unsigned int v_19;
  char v_17;
  unsigned int v_15;
  unsigned long long v_9;
  long v;
  signed char result;
  v_27 = (signed char)p_5;
  v_25 = (float)p_7;
  v_21 = (short)p_7;
  v_19 = 4294936229U;
  v_17 = (char)-80;
  v = 577944790L;
  result = (signed char)-101;
  if ((int)v_27 / (! ((int)p_13 - (int)p_5) + 205) > (int)((float)(~ v_17) - v_25)) {
    result = (signed char)((18446744073443909600ULL + (unsigned long long)v_21) * (unsigned long long)(
                           (int)p_11 % ((int)v_17 + 228)) + (unsigned long long)(- result));
    v_17 = (char)((unsigned long)((unsigned int)result - v_19) / (unsigned long)(
                  ((long)(- v_17) - v) + 800L));
    v_15 = (unsigned int)(((int)p[1][0] / ((int)p_11 + 895)) * ((int)p_11 % (
                                                                (int)v_17 + 589)) - (int)p_5);
  }
  else {
    v_25 = (float)p_7;
    v_23 = - ((unsigned int)(-6420.f + v_25) + - p_7);
    v_15 = (unsigned int)(218ULL % ((unsigned long long)(~ v_23) * 18446744073709506072ULL + 400ULL));
  }
  if (- ((unsigned int)(- p_11) ^ v_15) > ! (- ((unsigned int)p[0][0] % 4294946809U))) {
    v = (long)(~ (! ((int)p_5 ^ 45)));
    result = (signed char)((float)((unsigned long)((unsigned int)p[1][0] - 7544U) + (unsigned long)v) + 5813009408.f);
  }
  else {
    v_9 = (unsigned long long)(440.875152588f / ((float)(! ((int)p_13 ^ (int)p_5)) + 283.f));
    result = (signed char)(676346911ULL * ((unsigned long long)p_7 / (
                                           v_9 + 506ULL) - 14404008ULL / (unsigned long long)(
                                                           (int)p_11 + 179)));
  }
  return result;
}


