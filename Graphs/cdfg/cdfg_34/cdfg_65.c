#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 751463087
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned short p_5[2][5], double p_13,
                unsigned short p_15, int p_19)
{
  short v_21;
  unsigned int v_17;
  unsigned char v_11;
  signed char v_9;
  unsigned long long v_7;
  unsigned char v;
  signed char result;
  v_21 = (short)-6210;
  v_17 = 569154366U;
  v_11 = (unsigned char)p_5[0][4];
  v_9 = (signed char)p_5[0][2];
  v_7 = 18446744073709493492ULL;
  v = (unsigned char)161;
  if (((int)p_15 & p_19) == ! ((int)((char)p_13) - 24) % (p_19 * ((int)v_21 * (int)v_9) + 292)) {
    result = (signed char)v_7;
    result = result;
    v_9 = (signed char)(v_7 + 56816ULL);
  }
  else {
    result = (signed char)((long long)((-49590 + (int)v) / ((int)p + 240)) / (
                           596536949LL * ((long long)p_19 * 206847285LL) + 901LL));
    v_9 = (signed char)((int)((float)v + (float)v_17 * -141.559997559f) % (
                        (int)(~ v) % ((int)(! p) + 85) + 903));
    v_7 = 0ULL;
  }
  if ((unsigned long long)(~ (((int)v_9 - (int)v_11) - (int)(p_13 + -644.332166658))) != 
      - (v_7 - 664563891ULL) + 28191ULL) result = (signed char)-2.93532174426e+37;
  else {
    v = (unsigned char)((18446744073709526188ULL << 6) * 18446744073174311652ULL - (unsigned long long)result);
    v = (unsigned char)(((3925514969ULL - v_7) * (unsigned long long)(~ v)) % (
                        v_7 + 174ULL));
    result = (signed char)(63.2847811648 * (double)((39615 * (int)v) / (
                                                    ((int)p + (int)p_5[1][1]) + 1002)));
  }
  return result;
}


