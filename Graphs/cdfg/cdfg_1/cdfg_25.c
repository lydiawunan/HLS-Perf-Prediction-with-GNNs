#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 714521225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[3][4], short p_15, unsigned long p_19,
                  unsigned long p_21)
{
  unsigned long v_25;
  short v_23;
  int v_17;
  long v_12;
  signed char v_10;
  short v_8;
  unsigned int v_6;
  signed char v_4;
  float v;
  unsigned char result;
  v_23 = (short)-14100;
  v_17 = (int)p_15;
  v_10 = (signed char)-115;
  v_8 = (short)p[0][0];
  v_6 = 4194166639U;
  v_4 = (signed char)p_19;
  result = (unsigned char)p_21;
  if ((long long)(~ ((int)v_8)) >= ((long long)p_21 * (58344LL & (long long)p[0][3])) % 197LL) {
    v_10 = (signed char)(~ v_17);
    v_8 = (short)(! (~ result));
    v = (float)(~ (p[1][3] * (unsigned int)(237 * (int)p_15)));
  }
  else {
    v_25 = ((4294967253UL + p_19) + (unsigned long)(p[2][2] >> (v_6 & 31U))) - (unsigned long)p_15;
    v_4 = (signed char)(- ((unsigned long)v_23 / (! v_25 + 372UL)));
    v = (float)(((unsigned long)(p[2][1] + p[2][2]) & p_19) & (unsigned long)(
                                                              (unsigned int)result - p[2][2]) % (
                                                              p_21 / 87UL + 645UL));
  }
  if (v > (float)(4294951260U | ~ (! p[2][1]))) {
    v_6 = (unsigned int)((int)((float)((int)v_8 * 2) + - v) / (((int)v_10 * 13827) / 46341 + 909));
    v = (float)(((unsigned int)v_4 / (v_6 + 864U) + 4176937462U) % (~ (
                                                                    49231U % (
                                                                    v_6 + 163U)) + 230U));
    result = (unsigned char)v;
  }
  else {
    v_4 = (signed char)(! (unsigned char)71);
    v_12 = (long)v_4;
    result = (unsigned char)v_12;
  }
  return result;
}


