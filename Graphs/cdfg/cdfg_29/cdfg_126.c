#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1058771349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, int p_5, unsigned long p_7[4][2][2], char p_9,
                  char p_13)
{
  signed char v_21;
  signed char v_19;
  int v_17;
  char v_15;
  unsigned short v_11;
  unsigned long v;
  unsigned long result;
  v_21 = (signed char)p_5;
  v_19 = (signed char)52;
  v_17 = -25260;
  v_11 = (unsigned short)p_5;
  result = p_7[2][1][0];
  if ((p_7[1][1][0] % (unsigned long)(p_5 + 71)) * ((unsigned long)v_11 * (
                                                    34UL * result)) > p_7[3][1][1]) {
    v_11 = (unsigned short)p_13;
    v_15 = (char)(! (short)-27289);
  }
  else {
    v_11 = (unsigned short)(~ (((int)p * (int)p_13) % (! v_17 + 706)));
    v_15 = (char)((unsigned long long)(! v_19) * (62759ULL % (unsigned long long)(
                                                  (int)v_11 + 379) & (unsigned long long)(
                                                  (int)v_21 << 7ULL)));
    v_11 = (unsigned short)(((unsigned long)p_5 / (p_7[3][0][0] + 95UL)) % (unsigned long)(
                            227 / ((v_17 & (int)p_9) + 610) + 622));
  }
  if ((long)(21432 % ((int)p_9 + 720)) / ((long)((int)v_11 * (int)p_13) * 5181L + 371L) < (long)v_15) {
    v = (unsigned long)((unsigned long long)((unsigned long)((int)p - p_5) / (
                                             p_7[2][1][1] + 1019UL)) + 40741ULL);
    result = ~ v;
  }
  else result = (unsigned long)-1.07491599998e+38;
  return result;
}


