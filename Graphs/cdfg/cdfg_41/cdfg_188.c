#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 601286163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, long p_4, int p_13, short p_17[1], long p_19)
{
  unsigned long v_29;
  unsigned int v_27;
  double v_25;
  short v_23;
  unsigned long long v_21;
  long v_15;
  unsigned long long v_11;
  unsigned long v_9;
  unsigned char v_7;
  int v;
  char result;
  v_29 = (unsigned long)p_13;
  v_27 = (unsigned int)p;
  v_25 = -1.60731800845e+37;
  v_23 = (short)p_19;
  v_11 = 49523ULL;
  v_9 = (unsigned long)p;
  v_7 = (unsigned char)8;
  v = p;
  if ((unsigned long)(((p_4 ^ -44L) | (long)(~ v_23)) + (long)(! (! p_17[0]))) >= 
      0 % ((3255707184UL - ((unsigned long)v_25 >> 3UL)) + 351UL)) {
    v_21 = ! (24032ULL / (v_11 / 18446744073709551590ULL + 17ULL));
    v_7 = (unsigned char)(~ (v_21 - (unsigned long long)v_23 / (v_21 + 940ULL)));
    v_11 = (unsigned long long)((44597UL / (unsigned long)((p_4 | (long)p) + 828L)) % 4294954399UL);
  }
  else {
    v_21 = (unsigned long long)(! (4294948232UL * v_9) * v_29);
    v_9 = (unsigned long)((- v_21 | (unsigned long long)(86 % ((int)v_7 + 408))) >> (
                          ~ (115U + v_27) & 63U));
    v_7 = (unsigned char)(- ((double)(p_4 + (long)p) * v_25));
  }
  if (((unsigned long long)(- p_17[0]) % (~ v_11 + 657ULL) ^ (v_11 + (unsigned long long)(~ v_7))) <= 18446744073709551600ULL) {
    v_7 = (unsigned char)((unsigned long long)(89UL - v_9 * (unsigned long)p_4) % (
                          ! v_11 * (unsigned long long)((int)-6143982331.21 / (
                                                        v + 993)) + 561ULL));
    result = (char)(990310453ULL + (unsigned long long)v_7);
    result = (char)(((long)p * p_4 ^ (long)((int)result * v)) % -91L);
  }
  else {
    v_15 = (long)((long long)p_19 + 6391LL);
    result = (char)(((long)p_13 * v_15 - ((long)p_17[0] + p_4)) & 92L);
  }
  return result;
}


