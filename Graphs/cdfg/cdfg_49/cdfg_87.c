#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238944373
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, float p_5[3], long p_9[4][1],
              unsigned short p_11[5][1][4], float p_19)
{
  long v_29;
  unsigned int v_27;
  unsigned char v_25;
  int v_23;
  long v_21;
  unsigned int v_17;
  int v_15;
  unsigned long v_13;
  int v_7;
  unsigned short v;
  long long result;
  v_29 = (long)p;
  v_27 = 1040996224U;
  v_25 = (unsigned char)p_9[2][0];
  v_23 = (int)p_11[4][0][0];
  v_21 = p_9[2][0];
  v_17 = 123836341U;
  v_13 = 3370065083UL;
  v = (unsigned short)13925;
  if (((unsigned long)((unsigned int)(- p_19) % (v_27 % (v_17 + 189U) + 561U)) & (
       3833001162UL + 4294943160UL % (v_13 + 37UL))) <= (unsigned long)(
      ! ((long)v_23 * v_29) | (long)p_5[2])) {
    v_23 = ! (68 << 7U);
    v_23 = (int)(3918909732ULL % ((unsigned long long)v_25 % 315486802ULL + 141ULL) - (unsigned long long)v_23);
    v_21 = (long)(- (signed char)-6);
  }
  else {
    v_23 = (int)((long long)(- (v_13 - (unsigned long)p_9[2][0])) % (
                 (long long)v_21 / -58110LL + 767LL));
    v_13 = (unsigned long)(p | (int)(~ v) % ((p & p) + 739));
    v_21 = (long)(- p_19);
  }
  if (! ((long long)((long)p_19 / (v_21 + 70L)) * ((long long)v_23 & 269687074LL)) >= (long long)(~ p_11[3][0][2])) {
    v_7 = (int)((long long)((unsigned long)(p_9[1][0] + (long)p_11[1][0][2]) / 3326226887UL) % (
                ((long long)v_13 - 19898LL) + 74LL));
    v = (unsigned short)((145326127ULL + (unsigned long long)v_7) % (unsigned long long)(
                         (-979377280 | p) + 271) - 486437674ULL);
    result = (long long)(- (- p) / (((int)(~ v) ^ (26 - (int)((char)p_5[2]))) + 1014));
  }
  else {
    v_15 = (int)v_13;
    v_17 = (unsigned int)(! (unsigned short)15023);
    result = (long long)((unsigned long)((long)v_15 * - p_9[2][0]) % (unsigned long)(
                         v_17 + 253U));
  }
  return result;
}


