#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 321857922
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, int p_11, unsigned long long p_13,
                       double p_17, char p_19[4][2])
{
  unsigned long long v_27;
  char v_25;
  long v_23;
  float v_21;
  short v_15;
  double v_9;
  unsigned char v_6;
  int v_4;
  int v;
  unsigned long long result;
  v_27 = (unsigned long long)p;
  v_25 = (char)p_17;
  v_21 = (float)p;
  v_15 = (short)29661;
  result = 49342ULL;
  if (- ((p_17 * (double)v_21) / ((double)(8ULL / (result + 74ULL)) + 98.)) > (double)(
      ((float)((int)p / ((int)p + 621)) + v_21) + 22220.f)) {
    v_21 = (float)(short)-29897;
    v_23 = (long)(18446744073709551491ULL + ((unsigned long long)p_19[0][1] + p_13));
    v_6 = (unsigned char)((long)((int)p % -617589997 >> ((int)p_19[3][0] & 31)) * (
                          (long)((int)v_15 << 1) | v_23 * (long)p));
  }
  else {
    v_6 = (unsigned char)((double)((int)v_25 * (int)(! p)) - (106.263765688 + (double)(
                                                              v_27 / (unsigned long long)(
                                                              p_11 + 422))));
    v_21 = (float)-348989477;
    v_15 = (short)(~ ((unsigned long long)((int)p_19[3][0] / ((int)p + 422)) % (
                      p_13 + 777ULL)));
  }
  if ((float)(~ p_13 + (p_13 % (unsigned long long)((int)v_15 + 282)) % (
                       (unsigned long long)(p_17 - (double)p_19[3][1]) + 783ULL)) < - v_21) {
    v_4 = -42550;
    v = (int)(~ (((unsigned long long)v_4 - 45957ULL) * (unsigned long long)(
                 (int)v_6 / ((int)p + 316))));
    result = (unsigned long long)v;
  }
  else {
    v_9 = (double)p_11;
    result = (unsigned long long)v_9;
  }
  return result;
}


