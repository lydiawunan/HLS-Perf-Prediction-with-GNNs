#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 391218342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned long long p_5[1][4][1],
                signed char p_11[1][1], char p_13, unsigned int p_15)
{
  double v_31;
  float v_29;
  unsigned long v_27;
  unsigned long v_25;
  unsigned short v_23;
  short v_21;
  float v_19;
  char v_17;
  long long v_9;
  double v_7;
  unsigned long long v;
  signed char result;
  v_31 = (double)p_15;
  v_29 = 7378792448.f;
  v_27 = (unsigned long)p_5[0][1][0];
  v_25 = 3457097731UL;
  v_23 = (unsigned short)20407;
  v_21 = (short)3930;
  v_19 = -5387766784.f;
  v_9 = -429866778LL;
  while ((180ULL % (- p_5[0][1][0] + 323ULL)) * (unsigned long long)v_25 <= (unsigned long long)(
         (long long)(- (v_27 * 45729UL)) - 424LL)) {
    v_23 = v_29 * 425911456.f;
    v_21 = (short)(~ (p_15 / (unsigned int)(8 % ((int)v_21 + 650) + 380)));
    v_9 = (long long)((unsigned long)((int)((unsigned short)v_19) - 61292) / (
                      ~ v_27 + 797UL) + (unsigned long)((int)((short)v_31)));
    v_27 = (unsigned long)(~ (-60734978856LL));
  }
  while_0_break: ;
  if ((351.239807129f * v_19 + (float)(p_15 % (unsigned int)((int)v_21 + 522))) + (float)(
      (unsigned long)((int)p_13 % ((int)p_11[0][0] + 635)) - (3221459399UL - (unsigned long)p_15)) < (float)(
      ((int)v_23 >> ((int)p_11[0][0] & 15)) / 39864 | (int)p_11[0][0])) {
    v_7 = (double)v_9;
    v = (unsigned long long)(- ((double)p_5[0][3][0] - v_7 / 4294916615.));
    result = (signed char)(! ((unsigned long long)p ^ v) - 3072311083ULL);
  }
  else {
    v_17 = (char)p;
    result = (signed char)((double)((unsigned int)((int)p_11[0][0] + (int)p_13) * ~ p_15) * (
                           9463. * (837.919181535 - (double)v_17)));
  }
  return result;
}


