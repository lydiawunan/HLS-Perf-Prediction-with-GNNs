#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958078075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, signed char p_4, short p_7, float p_9[4][3],
         double p_13[1][5][1])
{
  unsigned short v_27;
  unsigned short v_25;
  unsigned short v_23;
  char v_21;
  unsigned char v_19;
  long v_17;
  short v_15;
  unsigned long v_11;
  char v;
  char result;
  v_27 = (unsigned short)p_9[1][0];
  v_25 = (unsigned short)p_9[1][0];
  v_23 = (unsigned short)55786;
  v_21 = (char)66;
  v_19 = (unsigned char)p;
  v_17 = (long)p;
  v_15 = (short)-20952;
  v_11 = 3333661741UL;
  result = (char)p_13[0][0][0];
  while ((float)((long long)(28785UL + (unsigned long)v_17) / 736194809LL) / (
         - (- p_9[3][1]) + 631.f) <= 41067.f * p_9[2][0]) {
    v_11 = (double)v_27 + 823.205512197;
    v = (char)0;
    v_23 = (unsigned short)((double)v / ((- p_13[0][3][0] - (double)(
                                          (long long)p_7 + 957605799LL)) + 867.));
    v_17 = 26L;
  }
  while_0_break: ;
  if ((double)((float)(~ v_17) * (p_9[2][2] - 3396779264.f)) * (((double)v_17 + p_13[0][3][0]) - 
                                                                p_13[0][3][0] / (
                                                                p_13[0][2][0] + 42.)) > (double)(~ (
      ((int)((unsigned short)p_9[0][1]) / ((int)v_25 + 18)) % ((int)v_15 + 254)))) {
    v = (char)(((double)p_4 / 1501.44341422) * (double)p_7 - (double)(- (
               (unsigned long)p_9[0][1] / (v_11 + 288UL))));
    result = (char)(! ((unsigned long long)((int)p_4 / ((int)v + 948)) - (
                       p + 506ULL)));
    result = (char)(- (18446744073163015476ULL ^ (unsigned long long)result) / (
                    18446744073709534276ULL / (- p + 2ULL) + 479ULL));
  }
  else {
    v_15 = (short)(((v_17 + (long)v_19) * (long)(~ result)) * (long)(
                   (int)(- p_13[0][4][0]) % (((int)v_21 - (int)v_23) + 175)));
    result = (char)((unsigned long long)(58874.799028 * (p_13[0][1][0] - -19946.)) % (
                    0 / (unsigned long long)(((int)v_15 - -80) + 738) + 255ULL));
    result = (char)((unsigned long long)(- (p_13[0][3][0] - (double)result)) / (
                    18446744072643685769ULL % (unsigned long long)((int)p_4 + 858) + 392ULL));
  }
  return result;
}


